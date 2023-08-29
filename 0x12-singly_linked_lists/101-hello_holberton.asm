global main        ; Déclare la fonction main comme étant globale

extern printf     ; Déclare printf comme une fonction externe

main:
    mov   edi, format  ; Charge l'adresse de la chaîne de format dans edi
    xor   eax, eax     ; Met eax à zéro (pour indiquer qu'il n'y a pas d'arguments variadiques)
    call  printf       ; Appelle la fonction printf avec la chaîne de format

    mov   eax, 0       ; Met le code de retour à zéro (indiquant que le programme s'est bien terminé)
    ret                ; Retourne de la fonction main

format:
    db `Hello, Holberton\n`,0  ; Définit une chaîne de format avec un saut de ligne
