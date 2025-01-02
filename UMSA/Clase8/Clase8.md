# Divisivilidad

Para cualquier numero n sus divisores seguiran la siguiente propiedad

6 -> 1, 2, 3, 6
6 x 1 = 6
2 x 3 = 6

Si quieremos sacar el divisor espejo dividimos

>[!TIP]
>Por lo tanto podemos iterar hasta la raiz del numero

# Cantidad de divisores par o impar?

Se supone una entrada de 10^18, por lo tanto iterar no es opcion, se sale del tiempo

Entonces, que hacemos? Bueno primero vamos a ver mas alla, sabemos que iterando no es
entonces tiene que haber otra propiedad que nos permita calcular eso

12 -> 6 -> Par
13 -> 2 -> Par
14 -> 4 -> Par
15 -> 4 -> Par
16 -> 5 -> Impar -> 1 2 4  4 8 16
17 -> 2 -> Par
18 -> 4 -> Par
19 -> 2 -> Par

Como podemos ver con el 16 el numero de reduce a 5 ya que el 4 no se puede repetir
Entonces que propiedad tiene el 16? Vamos otro ejemplo
25 -> 3 -> Impar -> 1 5  5 25 -> 1 5 25
Los numeros cuyos divisores son impares son los que son cuadrados perfectos, es decir
que su raiz es entera
