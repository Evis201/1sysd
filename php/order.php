<!DOCTYPE html>
<html>
<head>
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Formulaire de commande</title>
    <link rel="stylesheet" href="styles.css">
</head>
<body>
    <form action="order.php" method="post">
        <label for="firstName">Prénom :</label><br>
        <input type="text" id="firstName" name="firstName"><br>
        <label for="lastName">Nom :</label><br>
        <input type="text" id="lastName" name="lastName"><br>
        <label for="street">Rue :</label><br>
        <input type="text" id="street" name="street"><br>
        <label for="postalCode">Code postal :</label><br>
        <input type="text" id="postalCode" name="postalCode"><br>
        <label for="city">Ville :</label><br>
        <input type="text" id="city" name="city"><br>
        <label for="pizza">Choisissez une pizza :</label><br>
        <select id="pizza" name="pizza[]" multiple>
            <option value="margherita">Margherita</option>
            <option value="pepperoni">Pepperoni</option>
            <option value="hawaiian">Hawaiian</option>
        </select><br>
        <label for="extra">Ingrédients supplémentaires :</label><br>
        <input type="text" id="extra" name="extra"><br>
        <input type="submit" value="Soumettre">
    </form>
</body>
<?php
if ($_SERVER["REQUEST_METHOD"] ==  "GET" && isset($_GET['orderId'])) {
    $orderId = $_GET['orderId'];
}
if ($_SERVER["REQUEST_METHOD"] == "POST" && isset($_POST['orderId'])) {
    $orderId = $_POST['orderId'];
}
if ($_SERVER["REQUEST_METHOD"] == "POST") {
    // STOCKAGE
    $firstName = $_POST['firstName'];
    $selectedPizzas = isset($_POST['pizza']) ? (is_array($_POST['pizza']) ? $_POST['pizza'] : array($_POST['pizza'])) : array();
    if (count($selectedPizzas) > 2) {
        echo "Promotion appliquée : 2 + 1 offerte";
    }
    $lastName = $_POST['lastName'];
    $street = $_POST['street'];
    $postalCode = $_POST['postalCode'];
    $city = $_POST['city'];
    $extraIngredients = $_POST['extra'];

    // PRIX
    $pizzaPrices = [
        "margherita" => 5.00,
        "pepperoni" => 6.00,
        "hawaiian" => 7.00
    ];

    // COUT TOTAL
    $totalCost = 0;
    foreach ($selectedPizzas as $choice) {
        $totalCost += $pizzaPrices[$choice];
    }

    // PREPARATION COMMANDE
    $orderSummary = "<h2>Récapitulatif de la commande :</h2>\n";
    $orderSummary .= "ID de la commande : " . uniqid() . "\n";
    $orderSummary .= "Nom :$firstName $lastName\n";
    $orderSummary .= "Adresse : $street, $postalCode, $city\n";
    $orderSummary .= "Pizzas : " . implode(", ", $selectedPizzas) . "\n";
    $orderSummary .= "Ingrédients supplémentaires : $extraIngredients\n";
    $orderSummary .= "Coût total : $totalCost €\n";
    $orderSummary .= "Statut de la commande : En attente\n";

    echo nl2br($orderSummary);
}
?>
</html>