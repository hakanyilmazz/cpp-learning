$exeFilePath = "$pwd\main.exe"
$codeFilePath = "$pwd\main.cpp"
$buildCommand = "g++ -o main $codeFilePath"

function Write-ColorOutput($ForegroundColor)
{
    # save the current color
    $fc = $host.UI.RawUI.ForegroundColor
    # set the new color
    $host.UI.RawUI.ForegroundColor = $ForegroundColor

    # output
    if ($args) {
        Write-Output $args
    }
    else {
        $input | Write-Output
    }

    # restore the original color
    $host.UI.RawUI.ForegroundColor = $fc
}

if ([System.IO.File]::Exists($exeFilePath)) {
    Remove-Item -Path $exeFilePath
}

if ([System.IO.File]::Exists($codeFilePath)) {
    Write-ColorOutput green("Building......")
    iex $buildCommand
} else {
    Write-ColorOutput red("File couldn't found!`n`t'$codeFilePath'")
    Break Script
}

if ([System.IO.File]::Exists($exeFilePath)) {
    $runProcess = Start-Process $exeFilePath -NoNewWindow -PassThru

    Write-ColorOutput green("Running......`n")
    $runProcess.WaitForExit()
    Write-ColorOutput green("`nFinished.... Deleting exe file.`n")

    Remove-Item -Path $exeFilePath
} else {
    Write-ColorOutput red("Something went wrong! File couldn't found!`n`t'$exeFilePath'")
}