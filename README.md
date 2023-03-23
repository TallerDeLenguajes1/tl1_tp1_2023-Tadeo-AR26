# **TP 1**

_Trabajo Práctico Nº1 de Taller de Lenguajes_

## **gitignore**

El archivo .gitignore se utiliza para indicarle a Git qué archivos y directorios ignorar cuando se realiza una confirmación; Se utiliza en caso de no querer compartir en el directorio archivos que contengan información priviligeada (Tokens, Contraseñas, etc.)
El archivo .gitignore debe ser añadido para compartir las reglas de ignore con otros usuarios que clonan el repositorio.

Para ignorar un archivo se debe escribir su nombre dentro de .gitignore, utilizando la dirección relativa del archivo en relación a la ubicación de .gitignore

En caso de que se desee ignorar un archivo previamente incluido en el repositorio es necesario utilizar en git Bash el comando $ git rm --cached FILENAME.


### **Ejercicio 3-g**

En los apartados 2 y 3 el resultado es el mismo debido a que el puntero almacena la dirección de memoria de la variable a la que está apuntando, en este caso _num_
En el ejercicio Nº4 se obtiene un valor distinto, ya que esta vez no se muestra por pantalla la dirección de memoria de la variable _num_ sino la del puntero, es decir la dirección de memoria de la variable _pnum_
