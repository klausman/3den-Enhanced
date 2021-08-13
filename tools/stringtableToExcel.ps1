# Force unicode for all cmdlets
$PSDefaultParameterValues['*:Encoding'] = 'utf8'

$PathXML = $env:OneDrive + "\Games\Arma 3\Arma 3 Mods\3den-Enhanced\3denEnhanced\stringtable.xml"
$PathXLSX = $env:OneDrive + "\Games\Arma 3\Arma 3 Mods\3den-Enhanced\stringtable.xlsx"

# Get XML content
[xml] $XML = Get-Content -Path $PathXML

$Excel = New-Object -ComObject Excel.Application

# Make Excel visible
$Excel.visible = $True

# Add a workbook (A new file basically)
$Workbook = $Excel.Workbooks.Add()

# Define the headers
$Headers = @(
  "English",
  "German",
  "Italian",
  "Czech",
  "Chinesesimp",
  "Spanish",
  "French",
  "Polish",
  "Russian",
  "Portuguese"
)

for ($i = $Headers.Length - 1; $i -ge 0; $i--) # Reverse so English is first
{
    $Language = $Headers[$i]

    # Use the default sheet for the Portuguese language
    if ($Language -eq "Portuguese")
    {
        $WorkSheet = $Workbook.worksheets.item(1)
        $WorkSheet.Name = $Language
    }
    else
    {
        $WorkSheet = $Workbook.worksheets.add()
        $WorkSheet.Name = $Language
    }

    #Add header to each sheet
    $Worksheet.Cells.Item(1, 1) = "Keys"
    $Worksheet.Cells.Item(1, 2) = $Language

    $Worksheet.Cells.Item(1, 1).Font.Bold = $True
    $Worksheet.Cells.Item(1, 2).Font.Bold = $True

    $Worksheet.Cells.Item(1, 1).Font.Size = 18
    $Worksheet.Cells.Item(1, 2).Font.Size = 18

    # Get keys
    $Col = 1
    $row = 2
    $XML.Project.ChildNodes.ID | ForEach-Object {
        $Worksheet.Cells.Item($row, $Col) = [String]$_ -replace "STR_ENH_" -replace ""
        $_.English
        $row++
    };

    # Get translation for each key
    $Col = 2
    $row = 2
    $XML.Project.ChildNodes.$Language | ForEach-Object {
        $Worksheet.Cells.Item($row, $Col) = $_
        $row++
    }
    $Worksheet.columns.AutoFit()

    Write-Host $Language, "finished loading."
}

# Check if file already exists, if yes, delete it
if (Test-Path $PathXLSX)
{
  Remove-Item -Path $PathXLSX
}

$excel.DisplayAlerts = 'False'
$Workbook.SaveAs($PathXLSX, 51) # http://msdn.microsoft.com/en-us/library/bb241279.aspx
$Workbook.Close()
$excel.Quit()

Write-Host "stringtable.xml to stringtable.xlsx convertion completed!"

<# # Force unicode for all cmdlets
$PSDefaultParameterValues['*:Encoding'] = 'utf8'

$PathXML = $env:OneDrive + "\Games\Arma 3\Arma 3 Mods\3den-Enhanced\3denEnhanced\stringtable.xml"
$PathXLSX = $env:OneDrive + "\Games\Arma 3\Arma 3 Mods\3den-Enhanced\stringtable.xlsx"

# Get XML content
[xml] $XML = Get-Content -Path $PathXML

# Create Excel file
$Excel = New-Object -ComObject Excel.Application

# Make Excel visible
$Excel.visible = $True

# Add a workbook (A new file basically)
$Workbook = $Excel.Workbooks.Add()

# Add a worksheet (A new page basically)
$Worksheet= $workbook.Worksheets.Item(1)
$Worksheet.Name = "Translations"

# Define the headers
$Headers = @(
  "Key",
  "English",
  "German",
  "Italian",
  "Czech",
  "Chinesesimp",
  "Spanish",
  "French",
  "Polish",
  "Russian",
  "Portuguese"
)

# Loop through the headers and create them
$Col = 1
$row = 1

$Headers | ForEach-Object -Process
{
  $Worksheet.Cells.Item($row, $col) = $_
  $Worksheet.Cells.Item($row, $col).Font.Bold = $True
  $Worksheet.Cells.Item($row, $col).Font.Size = 18
  $Col++
}

$Col = 1
$row = 2
$XML.Project.ChildNodes.ID | ForEach-Object -Process
{
  $Worksheet.Cells.Item($row, $Col) = $_
  $row++
};

$Col = 2
$row = 2
$XML.Project.ChildNodes.English | ForEach-Object -Process
{
  $Worksheet.Cells.Item($row, $Col) = $_

  $row++
};

$Col = 3
$row = 2
$XML.Project.ChildNodes.German | ForEach-Object -Process
{
  $Worksheet.Cells.Item($row, $Col) = $_

  $row++
};

$Col = 4
$row = 2
$XML.Project.ChildNodes.Italian | ForEach-Object -Process
{
  $Worksheet.Cells.Item($row, $Col) = $_

  $row++
};

$Col = 5
$row = 2
$XML.Project.ChildNodes.Czech | ForEach-Object -Process
{
  $Worksheet.Cells.Item($row, $Col) = $_

  $row++
};

$Col = 6
$row = 2
$XML.Project.ChildNodes.Chinesesimp | ForEach-Object -Process
{
  $Worksheet.Cells.Item($row, $Col) = $_

  $row++
};

$Col = 7
$row = 2
$XML.Project.ChildNodes.Spanish | ForEach-Object -Process
{
  $Worksheet.Cells.Item($row, $Col) = $_

  $row++
};

$Col = 8
$row = 2
$XML.Project.ChildNodes.French | ForEach-Object -Process
{
  $Worksheet.Cells.Item($row, $Col) = $_

  $row++
};

$Col = 9
$row = 2
$XML.Project.ChildNodes.Polish | ForEach-Object -Process
{
  $Worksheet.Cells.Item($row, $Col) = $_

  $row++
};

$Col = 10
$row = 2
$XML.Project.ChildNodes.Russian | ForEach-Object -Process
{
  $Worksheet.Cells.Item($row, $Col) = $_

  $row++
};

$Col = 11
$row = 2
$XML.Project.ChildNodes.Portuguese | ForEach-Object -Process
{
  $Worksheet.Cells.Item($row, $Col) = $_
};

# Auto size all columns
$Worksheet.Columns.autofit()

# Check if file already exists, if yes, delete it
if (Test-Path $PathXLSX)
{
  Remove-Item -Path $PathXLSX
}

$excel.DisplayAlerts = 'False'
$Workbook.SaveAs($PathXLSX, 51) # http://msdn.microsoft.com/en-us/library/bb241279.aspx
$Workbook.Close()
$excel.Quit() #>