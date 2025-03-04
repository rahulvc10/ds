<!DOCTYPE html>
<html>
<head>
    <title>Employee Salary Statement</title>
</head>
<body>
    <h1>Employee Salary Input Form</h1>
    <form method="post" action="">
        <label for="name">Employee Name:</label><br>
        <input type="text" id="name" name="name"><br><br>     
        <label for="designation">Designation:</label><br>
        <input type="text" id="designation" name="designation"><br><br>      
        <label for="organization">Organization:</label><br>
        <input type="text" id="organization" name="organization"><br><br>       
        <label for="basicSalary">Basic Salary:</label><br>
        <input type="number" id="basicSalary" name="basicSalary><br><br>      
        <input type="submit" name="submit" value="Calculate Salary">
    </form>
    <hr>
    <?php
    if (isset($_POST['submit'])) {
        $name = $_POST['name'];
        $designation = $_POST['designation'];
        $organization = $_POST['organization'];
        $basicSalary = floatval($_POST['basicSalary']);
        $hra = 0.10 * $basicSalary;
        $grossSalary = $basicSalary + $hra;
        $incomeTax = 0.05 * $grossSalary;
        $netSalary = $grossSalary - $incomeTax;
        echo "<h2>Salary Statement</h2>";
        echo "<p>Employee Name: $name</p>";
        echo "<p>Designation: $designation</p>";
        echo "<p>Organization: $organization</p>";
        echo "<p>Basic Salary: ₹" . number_format($basicSalary, 2) . "</p>";
        echo "<p>HRA (10%): ₹" . number_format($hra, 2) . "</p>";
        echo "<p>Gross Salary: ₹" . number_format($grossSalary, 2) . "</p>";
        echo "<p>Income Tax Deduction (5%): ₹" . number_format($incomeTax, 2) . "</p>";
        echo "<p>Net Salary: ₹" . number_format($netSalary, 2) . "</p>";
    }
    ?>
</body>
</html>
