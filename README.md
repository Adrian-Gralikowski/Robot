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
https://github.com/user-attachments/assets/f71ce99e-09ef-4e89-b069-337cfde55c1f

https://github.com/user-attachments/assets/94e131ac-d0af-486d-9d18-c80d2401f0f9

## Screenshot aplikacji do sterowania robotem 
![Screenshot_20250120-213441 2](https://github.com/user-attachments/assets/0bac439e-ceda-4192-936f-5988357c9360)

## Zdjęcia
![20250115_185014](https://github.com/user-attachments/assets/c62b41fb-1ad3-45e4-be89-d09f25366be4)
![20250115_183457](https://github.com/user-attachments/assets/7291dd95-d60b-4f03-92a6-2ed256bb5351)
![20250115_184826](https://github.com/user-attachments/assets/da22069b-7edf-4505-b8fc-5b81ea8cbe63)
![20250115_185135](https://github.com/user-attachments/assets/32cd0e2c-589d-47f4-87a1-a7c33dc261cf)
