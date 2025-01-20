# Zdalnie Sterowany Robot z Aplikacją Mobilną

Celem projektu było stworzenie zdalnie sterowanego robota, którym można kierować za pomocą dedykowanej aplikacji na smartfona. Projekt łączy elementy programowania, elektroniki oraz modelowania 3D, a jego bazą jest platforma Arduino.

## Aplikacja i kod
- **Kod dla mikrokontrolera** napisano w języku C/C++, a jego pełną treść udostępniono w repozytorium projektu.  
- **Aplikację mobilną** do sterowania robotem stworzono przy użyciu platformy MIT App Inventor, co umożliwiło szybkie zaprojektowanie intuicyjnego interfejsu.

## Opis techniczny
- **Elektronika**: Robot oparty jest na Arduino Nano, a do sterowania silnikiem DC wykorzystano mostek H (układ L293D).
- **Komunikacja**: Polecenia z aplikacji na smartfona przesyłane są do modułu Bluetooth HC-05, który przekazuje je do mikrokontrolera realizującego funkcje sterujące. 
- **Sterowanie kierunkiem jazdy**: Kierunek jazdy robota kontrolowany jest za pomocą serwomechanizmu odpowiedzialnego za skręt przedniego koła.
- **Regulacja prędkości**: Prędkość jazdy jest sterowana za pomocą sygnału PWM, co umożliwia płynną kontrolę z poziomu aplikacji.  
- **Inne**: Dodatkowo robot wyposażono w diody LED, które sygnalizują ruch wsteczny.

## Projekt konstrukcyjny
- Elementy konstrukcyjne robota zaprojektowano w programie Fusion 360 i wydrukowano na drukarce 3D. Dzięki temu całość jest stabilna i w pełni dopasowana do zamontowanych elementów. 

## Filmy prezentujące działanie robota:
https://github.com/user-attachments/assets/6a621dc8-1b9e-406d-8769-4da8ed716a41

https://github.com/user-attachments/assets/9af72b4f-9488-4689-8de0-a1e8b8dfded4

## Screenshot aplikacji do sterowania robotem 
![Screenshot_20250120-213441 2](https://github.com/user-attachments/assets/0abdb110-decc-4100-80c5-290669b6476a)

## Zdjęcia
![20250115_185014](https://github.com/user-attachments/assets/9119d1eb-2e16-4215-bdea-50c687c6bd70)
![20250115_183457](https://github.com/user-attachments/assets/5943f9f0-2165-4656-b051-857c94da4200)
![20250115_184826](https://github.com/user-attachments/assets/2731980f-8d70-4f0b-9f49-f3ff701d1d41)
![20250115_184951](https://github.com/user-attachments/assets/dc9a7779-53c1-4b66-bbc6-b1a700539012)
![20250115_185135](https://github.com/user-attachments/assets/ce2004ee-7f6c-4416-bb30-9bc10bd9292b)
