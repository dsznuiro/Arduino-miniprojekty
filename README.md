# Arduino-miniprojekty

Staram się tworzyć prace z połączenia paru gotowych rozwiązań. Przy mojej znikomej wiedzy w kodowaniu arduino uważam że to jeden z lepszych sposobów na nauke. Każdy schemat tutaj zamieszczony jest wykonany przeze mnie.


# RGB + Ultrasonic_Sensor
ELEMENTY OBWODU:
3x Rezystory 1000 Ω
KY-016 - LED RGB
HC-SR04 ultrasonic sensor


Skonstruowane urządzenie działa tak że w zależności od dystansu rejestrowany przez sensor ultradźwięków świeci się dioda RGB. Teoretycznie kolory powinny przechodzić odpowiednio od najkrótszej: 
RED->GREEN->BLUE
Niestety przez niedokładność urządzenia odpowiadającego za pomiar kolory potrafią często losowo skakać, ponadto rzadko jest widoczny kolor czerwony bo nie ma na tyle małych wartości.


W PRZYSZŁOŚCI
-zrobić płynniejszą zmianę kolorów
-zastosować coś w rodzaju filtru na sensorze ultradźwięków żeby losowe wartości odbiegające od normy nie mogły się zainicjować

<!DOCTYPE html>
<html lang="pl">
<head>
    <meta charset="UTF-8">
    <title>Schematy Arduino</title>
    <style>
        img {
            display: block;
            margin: 0 auto;
            width: 700px; 
            margin-bottom: 10px;
        }
        p {
            text-align: center; 
            margin-bottom: 20px;
        }
    </style>
</head>
<body>
    <img src="https://github.com/user-attachments/assets/53e30d61-1325-430a-ac37-ba3ae35e4673"/>
    <p>Rys. 1 Układ breadboard z Arduino z HC-SR04</p>
    <img src="https://github.com/user-attachments/assets/d84d4ad7-2b21-41c9-9ee2-499608975e9b"/>
    <p>Rys. 1.2 Schemat elektryczny Arduino z HC-SR04</p>
</body>
</html>
