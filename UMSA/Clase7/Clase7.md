# Teorema Fundamental de la numeracion (TFN)

$123$ -> $(10^2 * 1) + (10^2 * 2) + (10^0 * 3)$

## Por que se usa el 10?
Es porque nosotros usamos la base de numeracion 10 {0, 9}
Sistema binario -> ${0, 2}$ -> Base 2

Nos sirve para composcion y descomposicion de numeros


## Descomposicion por derecha
Suponganse un numero n (924) y queremos saber cuales de sus digitos son pares
entonces de alguna manera tenemos que poner tener acceso al **9**, **2** y **4** respectivamente

> [!NOTE]
> Para sacar el ultimo digito de un numero es suficiente con divirlo entre 10

$924 / 10 = 92$

$924$ mod $10 = 4$
Despues de eso sacamos el 2
Luego al 9
Y al final el 0
Como se hace eso?
Basicamente diviendo entre 10

$92 / 10 = 9$ 
$92$ mod $10 = 2$

$9 / 10 = 0$
$9$ mod $10 = 9$

> [!NOTE]
> A esta manera de descomponer se llama descomposicion por derecha

>[!TIP]
>**Descomposcion por derecha**
>- Se divide entre 10 mientras el numero sea mayor a 0 o diferente de 0
>- Para sacar el ultimo digito es a % 10


## Descomposicion por izquierda?
Que necesitamos para ahora recorrer por izquierda?
$123$ -> $(10^2 * 1) + (10^2 * 2) + (10^0 * 3)$
Para sacar el ultimo digito se divide entre 10
Ahora para sacar el primer digito tenemos que ir a la ultima potencia de 10

Si a 123 lo dividimos entre 100 nos da 1 con moduo 23
$123 / 100 = 1$
$123$ mod $100 = 23$
La pregunta es como obtengo ese numero? (La cantidad de digitos del numero)


>[!TIP]
>Descomposicion por izquierda
>- Mientras que a > 0
>- Hallar la cantidad de digitos del numero