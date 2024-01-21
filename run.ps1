$exeFilePath = "$pwd\main.exe"

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

Write-ColorOutput green("Building......")
g++ -o main main.cpp

if ([System.IO.File]::Exists($exeFilePath)) {
    $proc = Start-Process $exeFilePath -NoNewWindow -PassThru

    Write-ColorOutput green("Running......`n")
    $proc.WaitForExit()
    Write-ColorOutput green("`nFinished.... Deleting exe file.`n")

    Remove-Item -Path $exeFilePath
} else {
    Write-ColorOutput red("File couldn't found!`n")
}