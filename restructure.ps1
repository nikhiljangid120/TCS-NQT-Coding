$topics = Get-ChildItem -Path "c:\Users\hp\Desktop\TCS NQT" -Directory | Where-Object { $_.Name -match "^0[1-9]_" }

foreach ($folder in $topics) {
    # Create subdirectories
    $cppPath = Join-Path $folder.FullName "cpp"
    $javaPath = Join-Path $folder.FullName "java"
    $pythonPath = Join-Path $folder.FullName "python"
    $theoryPath = Join-Path $folder.FullName "theory"
    
    if (-not (Test-Path $cppPath)) { New-Item -ItemType Directory -Path $cppPath | Out-Null }
    if (-not (Test-Path $javaPath)) { New-Item -ItemType Directory -Path $javaPath | Out-Null }
    if (-not (Test-Path $pythonPath)) { New-Item -ItemType Directory -Path $pythonPath | Out-Null }
    if (-not (Test-Path $theoryPath)) { New-Item -ItemType Directory -Path $theoryPath | Out-Null }
    
    # Move files
    $cppFiles = Get-ChildItem -Path $folder.FullName -Filter "*.cpp" -File
    foreach ($file in $cppFiles) {
        Move-Item -Path $file.FullName -Destination $cppPath
    }
    
    $exeFiles = Get-ChildItem -Path $folder.FullName -Filter "*.exe" -File
    foreach ($file in $exeFiles) {
        Remove-Item -Path $file.FullName -Force
    }
    
    $mdFiles = Get-ChildItem -Path $folder.FullName -Filter "*.md" -File
    foreach ($file in $mdFiles) {
        Move-Item -Path $file.FullName -Destination $theoryPath
    }
}

# Initialize Git
Set-Location "c:\Users\hp\Desktop\TCS NQT"
git init
git add .
git commit -m "Initial commit for TCS NQT contributor repo"

Write-Output "Restructure and Git Init Complete."
