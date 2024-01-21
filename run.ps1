g++ -o main main.cpp
$filePath = "$pwd\main.exe"

if ([System.IO.File]::Exists($filePath)) {
    .\main.exe
} else {
    write-host("File couldn't found!")
}