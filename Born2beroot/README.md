# Born2beroot-Tutorial 🖥🇪🇸

This guide has versions in different languages. Choose the one you prefer.

### English version 🇬🇧

![CLICK HERE](https://github.com/gemartin99/Born2beroot-Tutorial/blob/main/README_EN.md)

### Versão portuguesa 🇵🇹

![CLIQUE AQUI](https://github.com/gemartin99/Born2beroot-Tutorial/blob/main/README_POR.md)

# Índice

1. [Descargar imagen de la maquina virtual 💿](#1--descargar-imagen-de-la-maquina-virtual-)
2. [Instalación de la maquina 💻](#2--instalacion-de-la-maquina-)
3. [Instalación Debian 🌀](#3--instalación-debian-)
4. [Configuración de la máquina virtual ⚙️](#4-configuración-de-la-máquina-virtual-%EF%B8%8F)

	4.1 [Instalación de sudo y configuración de usuarios y grupos 👤](#41---instalación-de-sudo-y-configuración-de-usuarios-y-grupos-)
	
	4.2 [Instalación y configuración de SSH 📶](#42---instalación-y-configuración-ssh-)
	
	4.3 [Instalación y configuración de UFW 🔥🧱](#4-3-instalació-y-configuración-de-ufw-)
	
	4.4 [Configurar contraseña fuerte para sudo 🔒](#4-4-configurar-contraseña-fuerte-para-sudo-)
	
	4.5 [Configuración de política de contraseñas fuerte 🔑](#4-5-configuración-de-política-de-contraseñas-fuerte-)
	
	4.6 [Conectarse via SSH 🗣](#4-6-conectarse-via-ssh-)
	
5. [Script 🚨](#5--script-)

	5.1 [Resultado total del script 🆗](#5-13-resultado-total-del-script)
	
6. [Crontab ⏰](#6--crontab-)
7. [Signature.txt 📝](#7--signaturetxt-)
8. [Bonus ⭐](#8--bonus-%EF%B8%8F)

	8.1 [Particionado manual del disco 🛠](#81--particionado-manual-del-disco)
	
	8.2 [Wordpress y configuración de servicios 🌐](#82---wordpress-y-configuración-de-servicios-)
	
	8.3 [Servicio adicional ➕](#83---servicio-adicional-)

9. [Hoja de corrección ✅](#9--hoja-de-corrección-)

	9.1 [Respuestas de la evaluación 💯](#9-1-respuestas-de-la-evaluación-)
	
	9.2 [Comandos de la evaluación ⌨️](#9-2-comandos-de-la-evaluación-%EF%B8%8F)
10. [Tester 🆗](#10--tester-)
	
## 1- _Descargar imagen de la maquina virtual_ 💿

[Click aqui](https://www.debian.org/distrib/index.es.html) para redireccionarte a la URL donde puedes descargar la ISO de manera segura.

## 2- Instalacion de la maquina 🛠

Para realizar la instalación se requiere de un software de virtualización. En este tutorial haremos uso de [VirtualBox](https://www.virtualbox.org/). Si ya tienes VirtualBox instalado y dispones de la ISO Debian ya podemos empezar con el tutorial.

1 ◦ Debemos abrir VirtualBox y pinchar sobre ```Nueva```

<img width="836" alt="Captura de pantalla 2022-07-13 a las 18 02 05" src="https://user-images.githubusercontent.com/66915274/178779265-38eade6e-2789-4597-89e9-5beca2d3921a.png">

2 ◦ Escogemos el nombre de nuestra máquina y la carpeta donde estará ubicada. Importante introducir la maquina dentro de la carpeta sgoinfre ya que si no la ubicamos ahí nos quedaremos sin espacio y fallará la instalación (dependiendo del campus la ruta de sgoinfre puede cambiar). 

<img width="694" alt="Screen Shot 2022-11-18 at 2 30 18 PM" src="https://user-images.githubusercontent.com/66915274/202716278-394d5ce7-1f61-4146-a1b5-1e15ed005778.png">


3 ◦ Seleccionamos la cantidad de memoria RAM que reservaremos para la máquina. 

<img width="685" alt="Captura de pantalla 2022-07-13 a las 13 06 05" src="https://user-images.githubusercontent.com/66915274/178781098-8aa07fbc-e1d2-4bee-8021-ddf052880364.png">

4 ◦ Seleccionamos la segunda opción para asi crear un disco duro virtual ahora.

<img width="826" alt="Captura de pantalla 2022-07-13 a las 18 13 24" src="https://user-images.githubusercontent.com/66915274/178781390-289236e0-1732-4dd8-8d3d-34eb0a229a18.png">

5 ◦ Escogemos la primera opción ```VDI``` ya que nos hemos descargado una imagen de disco.

<img width="829" alt="Captura de pantalla 2022-07-13 a las 18 16 35" src="https://user-images.githubusercontent.com/66915274/178781999-a42c3c6c-bc1e-4ad5-8bc5-b4b3f811c3f2.png">

6 ◦ Seleccionamos la primera opción ```Reservado dinámicamente``` para que asi se vaya reservando memoria en la máquina real segun vayamos utilizandola en la virtual hasta llegado al límite máximo disponible en la virtual.

<img width="833" alt="Captura de pantalla 2022-07-13 a las 18 19 33" src="https://user-images.githubusercontent.com/66915274/178782529-fb309739-3169-4e20-b3e1-23d17a122a18.png">

7 ◦ Una vez hayamos establecido la cantidad recomendada ```12 GB``` deberemos darle a ```Crear```. Si haremos el bonus seleccionaremos ```30 GB```.

<img width="835" alt="Captura de pantalla 2022-07-13 a las 18 25 20" src="https://user-images.githubusercontent.com/66915274/178783666-4fa624a3-9c38-4c45-b6a8-d476c2864200.png">

8 ◦ Puede parecer que ya hemos terminado la instalación , pero todavía faltan un par de pasos más. Debemos darle a configuración

<img width="831" alt="Captura de pantalla 2022-07-13 a las 18 30 46" src="https://user-images.githubusercontent.com/66915274/178784822-38228e96-ca37-4cc0-b3ca-551829e4c8c8.png">

9 ◦ Acto seguido pincharemos encima de ```Almacenamiento``` , volveremos a pinchar sobre el emoticono 💿 que se encuentra a la derecha y de nuevo pincharemos sobre ```Seleccionar un archivo de disco```.

<img width="962" alt="Captura de pantalla 2022-07-13 a las 18 33 28" src="https://user-images.githubusercontent.com/66915274/178785148-2904cf4f-93c0-4866-a5d6-778390bddeb7.png">

10 ◦ Seleccionaremos la ISO que acabamos de descargar y le damos a ```Abrir``` y después le daremos a ```Aceptar```. 

<img width="790" alt="Captura de pantalla 2022-07-13 a las 18 38 39" src="https://user-images.githubusercontent.com/66915274/178786115-24f93fde-bc01-4e60-bf8d-20d7a5ae83be.png">

11. ◦ Una vez completados todos los pasos anteriores ya podemos ```Iniciar``` nuestra máquina virtual.

<img width="833" alt="Captura de pantalla 2022-07-13 a las 18 44 55" src="https://user-images.githubusercontent.com/66915274/178787317-aab80b53-8244-4ede-9c75-11fcf4efdd1c.png">

## 3- Instalación Debian 🌀

➤ Espera❗️ Tu vista es muy importante 👀❗️ Para poder hacer la ventana más grande debes hacer lo siguiente: 

<img width="666" alt="Captura de pantalla 2022-07-13 a las 18 51 41" src="https://user-images.githubusercontent.com/66915274/178788620-61064b58-0c0c-4f48-815e-60b4a8eaecae.png">

Utiliza la tecla ```command``` para que la captura del ratón pase de la maquina real a la virtual y al reves.

### Sigamos con la instalación 🛠

1 ◦ Escogeremos la version sin interfaz gráfica ```Install``` ya que el subject indica que no se utilice ninguna Cada vez que queramos confirmar algo presionaremos ```Enter``` y para movernos por las opciones utilizaremos las flechas.

<img width="632" alt="Captura de pantalla 2022-07-13 a las 18 58 48" src="https://user-images.githubusercontent.com/66915274/178789643-e987c6d0-5b6f-4b98-ad4a-5c092a352183.png">

2 ◦ Escogeremos el idioma que usaremos para la instalación y el predeterminado que se le quedará al sistema ```English```.  

<img width="794" alt="Captura de pantalla 2022-07-13 a las 19 00 41" src="https://user-images.githubusercontent.com/66915274/178789949-4fe83ac8-23b8-4f82-a034-a6d5e81d4f17.png">

3 ◦ Introducimos nuestro País, territorio o zona. En mi caso pondre ```Other```.

<img width="791" alt="Captura de pantalla 2022-07-13 a las 19 07 50" src="https://user-images.githubusercontent.com/66915274/178791067-44230a4c-e647-46cb-9d6f-bc441bf0227b.png">

4 ◦ Como he seleccionado other debo indicar mi continente o region. En mi caso pongo ```Europe``` 🇪🇺. 

<img width="797" alt="Captura de pantalla 2022-07-13 a las 19 09 58" src="https://user-images.githubusercontent.com/66915274/178791387-78171f90-2834-42ab-aedb-9cf900d0ecd5.png">

5 ◦ Seleccionamos el país. En mi caso ```Spain``` 🇪🇸.

<img width="793" alt="Captura de pantalla 2022-07-13 a las 19 12 01" src="https://user-images.githubusercontent.com/66915274/178791824-7a34813c-eae9-4b5c-9873-cea158229e07.png">

6 ◦ Seleccionamos ```United States```.

<img width="792" alt="Captura de pantalla 2022-07-13 a las 19 13 43" src="https://user-images.githubusercontent.com/66915274/178792054-4e72dfdd-8175-48f9-a06d-f2696fa752e3.png">

7 ◦ Importante seleccionar ```American English``` como configuración de teclado ya que si no tendremos las teclas mal enlazadas.

<img width="793" alt="Captura de pantalla 2022-07-13 a las 19 02 21" src="https://user-images.githubusercontent.com/66915274/178790230-d2571d4f-a546-4b43-bd44-c6a591d92d72.png">

8 ◦ En este paso debemos elegir el ```Host Name``` de la máquina, el cual debe ser tu login seguido de 42. 

<img width="792" alt="Captura de pantalla 2022-07-13 a las 19 17 23" src="https://user-images.githubusercontent.com/66915274/178792607-1cc585eb-ae32-4b2c-97fd-4fcf5bad4262.png">

9 ◦ Este apartado lo dejaremos vacío ya que el subject no mencionada nada de ```Domain name```.

<img width="792" alt="Captura de pantalla 2022-07-13 a las 19 20 29" src="https://user-images.githubusercontent.com/66915274/178793113-b0934aac-fac4-4844-8412-aca124038fd0.png">

10 ◦ Debemos introducir una contraseña para la cuenta de administración del sistema. Importante apuntarla o hacer una foto ya que le daremos uso. Si quieres ver la contraseña para asegurarte de que la has escrito correctamente debes tabular hasta llegar a la opción ```Show Password in Clear``` debes darle a la barra espaciadora y se mostrara la clave.

<img width="760" alt="Screen Shot 2022-11-18 at 2 32 55 PM" src="https://user-images.githubusercontent.com/66915274/202716754-cf30a8b0-0f3b-4aca-803e-57416a1667fa.png">

11 ◦ Repetimos el proceso de nuevo para comprobar que no la hayamos escrito mal.

<img width="751" alt="Screen Shot 2022-11-18 at 2 33 15 PM" src="https://user-images.githubusercontent.com/66915274/202716814-df6aa34a-e118-47cd-ac7e-ff7d35a3ef90.png">

12 ◦ Elegimos el nombre de nuestro nuevo usuario. Como indica el subject hay que crear un usuario adicional que no sea el root con nuestro login, por ese motivo llamaré ```gemartin``` a mi nuevo usuario.

<img width="794" alt="Captura de pantalla 2022-07-13 a las 19 26 20" src="https://user-images.githubusercontent.com/66915274/178794178-901f7951-a978-458d-a925-4586026784f7.png">

Volvemos a poner el nombre de usuario.

![image](https://user-images.githubusercontent.com/66915274/182679675-4d3805a9-34c9-4ba3-9488-1a7fe30f2519.png)


13 ◦ Ahora debemos introducir la contraseña de nuestro nuevo usuario. Como la anterior , repetiremos el proceso para comprobar que no la hayas escrito mal y tambien es importante que la guardes porque le daremos uso más adelante.

<img width="790" alt="Captura de pantalla 2022-07-13 a las 19 30 08" src="https://user-images.githubusercontent.com/66915274/178794862-94de8c7a-282e-4a83-9903-d3b8439122ea.png">

14 ◦ Seleccionamos la hora de nuestra ubicación.

<img width="796" alt="Captura de pantalla 2022-07-13 a las 19 31 41" src="https://user-images.githubusercontent.com/66915274/178795105-956854e1-deff-4851-8eba-26cdefb1e06f.png">

15 ◦ Esocgeremos la tercera opción ```Guied - use entire disk and set up encrypted LVM``` ya que el subject nos dice que deben ser particiones cifradas. ⚠️❗️ Si quieres hacer el bonus deberás darle a ```Manual``` y [hacer click aquí](#8--bonus-%EF%B8%8F) ❗️⚠️

<img width="796" alt="Captura de pantalla 2022-07-13 a las 19 33 13" src="https://user-images.githubusercontent.com/66915274/178795367-b82018de-edc8-47d3-8cd6-b90c5e3be2fa.png">


16 ◦ Seleccionamos el disco en el que queremos hacer el particionado (Solo debe haber un disco). 

<img width="789" alt="Captura de pantalla 2022-07-13 a las 19 40 03" src="https://user-images.githubusercontent.com/66915274/178796481-29ef7ebc-0518-40f0-9429-3f43316b35d3.png">

17 ◦ Una vez hayamos escogido el disco deberemos hacer el particionado tal y como nos piden. Para realizarlo adecuadamente debemos seleccionar la segunda opción ```Separate /home partition```.

<img width="787" alt="Screen Shot 2023-03-08 at 1 44 16 PM" src="https://user-images.githubusercontent.com/66915274/223716446-9ffb6f66-1ad3-4bfe-81ce-1f297bed0ede.png">

18 ◦ Esocgemos la opción ```Yes``` para que asi se escriban los cambios en el disco y podamos configurar el gestor de volumenes lógicos (LVM).

<img width="777" alt="Captura de pantalla 2022-07-13 a las 19 44 30" src="https://user-images.githubusercontent.com/66915274/178797258-8c34bc31-16a7-4aef-8406-cecc21fdf028.png">

19 ◦ Le damos a Cancel ya que el borrado de datos en el disco no es necesario.

<img width="782" alt="Captura de pantalla 2022-07-13 a las 19 46 45" src="https://user-images.githubusercontent.com/66915274/178797666-78cdf892-1a83-4c68-8f85-0d5440cd4854.png">

20 ◦ De nuevo deberemos poner una contraseña, esta vez será la frase de encriptación. Como te he comentado previamente deberás repetir el proceso y la debes anotar ya que será importante en un futuro.

<img width="777" alt="Captura de pantalla 2022-07-13 a las 19 51 17" src="https://user-images.githubusercontent.com/66915274/178798491-4c9b4a0c-d698-47c7-9579-10b16aa47275.png">

21 ◦ En este paso debemos introducir la cantidad de volumen que usaremos para la partición guiada. Debemos introducir ```max``` o el numero de tamaño maximo disponible en mi caso es ```12.4 GB```.

<img width="794" alt="Captura de pantalla 2022-07-13 a las 19 55 02" src="https://user-images.githubusercontent.com/66915274/178799165-c6b05fd2-86ad-45b7-a026-9ee169eda5d5.png">

22 ◦ Para finalizar la partición y escribir los cambios en el disco le daremos a la opción ```Finish partitioning and write changes to disk```.

<img width="789" alt="Screen Shot 2023-03-08 at 1 46 17 PM" src="https://user-images.githubusercontent.com/66915274/223716909-c20cea01-950f-49cd-9ce6-99ec0eab0ea4.png">

23 ◦ Seleccionamos la opción ```Yes``` para continuar y confirmar que no queremos hacer más cambios en el disco.

<img width="770" alt="Screen Shot 2023-03-08 at 1 46 52 PM" src="https://user-images.githubusercontent.com/66915274/223716940-b2e29ee7-3c98-434e-bccd-ac21d72eda2d.png">

24 ◦ Seleccionamos la opción ```No``` ya que no necesitamos paquetes adicionales. 

<img width="770" alt="Captura de pantalla 2022-07-13 a las 20 05 42" src="https://user-images.githubusercontent.com/66915274/178801099-2dda24f5-0d46-4184-8c44-a8fe0bf46527.png">

25 ◦ Escogemos nuestro País.

<img width="756" alt="Captura de pantalla 2022-07-13 a las 20 14 23" src="https://user-images.githubusercontent.com/66915274/178802653-d9e8504a-b60b-4441-8ee3-8d48ca4a6bf0.png">

26 ◦ Escogemos ```deb.debian.org``` ya que es lo que recomienda debian.

<img width="792" alt="Captura de pantalla 2022-07-13 a las 20 15 00" src="https://user-images.githubusercontent.com/66915274/178802772-4f67cd99-60d5-4439-8502-317e81e07d70.png">

27 ◦ Esta opción la dejaremos vacía y le daremos ```Continue```.

<img width="797" alt="Captura de pantalla 2022-07-13 a las 20 17 24" src="https://user-images.githubusercontent.com/66915274/178803208-2969acae-3fa7-423e-8a3c-bb7c76eff824.png">

28 ◦ Seleccionamos la opcion ```No``` ya que no queremos que los developers vean nuestras estadísticas aunque sean anónimas.

<img width="796" alt="Captura de pantalla 2022-07-13 a las 20 21 54" src="https://user-images.githubusercontent.com/66915274/178803926-a4efbc70-f3e2-4e6c-9809-9152478d8237.png">

29 ◦ Quitaremos todas las opciones de software (con la barra espaciadora) y le daremos a ```Continue```.

<img width="797" alt="Captura de pantalla 2022-07-13 a las 20 24 17" src="https://user-images.githubusercontent.com/66915274/178804377-e775b89e-93d4-482f-a4d0-0ef126f47719.png">

30 ◦ Seleccionaremos ```Yes``` para instalar [GRUB boot](https://es.wikipedia.org/wiki/GNU_GRUB) en el disco duro.

<img width="792" alt="Captura de pantalla 2022-07-13 a las 20 26 24" src="https://user-images.githubusercontent.com/66915274/178804771-ba16e0b7-9f06-4c5b-9451-0bfd65efd2bb.png">

31 ◦ Escogeremos el dispositivo para la instalación del cargador de arranque ```/dev/sda (ata_VBOX_HARDDISK)```.

<img width="792" alt="Captura de pantalla 2022-07-13 a las 20 35 46" src="https://user-images.githubusercontent.com/66915274/178806441-f1bf3159-4e09-4c9a-9102-b3261c9000d8.png">

32 ◦ Le daremos a ```Continue``` para finalizar la instalación. 

<img width="794" alt="Captura de pantalla 2022-07-13 a las 20 39 30" src="https://user-images.githubusercontent.com/66915274/178807102-e2a9722e-791f-48a0-ae35-b05b36a37ed2.png">

## 4 Configuración de la máquina virtual ⚙️

➤ Lo primero que debemos hacer es seleccionar ```Debian GNU/Linux```.

➤ Debemos introducir la contraseña de encriptación que utilizamos previamente. En mi caso es ```Hello42bcn```.

<img width="714" alt="Captura de pantalla 2022-07-13 a las 20 47 26" src="https://user-images.githubusercontent.com/66915274/178808699-f1024129-5f90-41d0-a9a8-4806f5bc114b.png">

➤ Debemos introducir el usuario y contraseña que hemos creado. En mi caso el usuario es ```gemartin``` y la contraseña ```Hola42spain```.

<img width="798" alt="Captura de pantalla 2022-07-13 a las 20 48 38" src="https://user-images.githubusercontent.com/66915274/178808994-664025ac-36df-4332-8e44-505ecd2ca305.png">

### Ya tenemos todo listo para empezar a configurar nuestra máquina virtual Debian❗️

### 4.1 - Instalación de sudo y configuración de usuarios y grupos 👤

1 ◦ Para la instalación de sudo primero debemos estar en el usuario root, para ello pondremos ```Su``` en el terminal y introduciremos la contraseña, en mi caso es ```Hola42bcn```. Una vez hemos accedido al usuario root debemos poner el comando ```apt install sudo``` para así instalar los paquetes necesarios.

<img width="796" alt="Captura de pantalla 2022-07-14 a las 1 36 46" src="https://user-images.githubusercontent.com/66915274/178855273-fc76689c-224b-4368-b7b1-5d1954427aff.png">

2 ◦ Debemos reiniciar la máquina para que se apliquen los cambios. Para ello haremos uso del comando ```sudo reboot``` y esperaremos a que se reinicie. 

<img width="514" alt="Captura de pantalla 2022-07-14 a las 2 02 24" src="https://user-images.githubusercontent.com/66915274/178857108-a51988e1-084c-498c-86c6-98ab5a3b1305.png">

3 ◦ Una vez reiniciado debemos volver a introducir las contraseñas de cifrado y del usuario. Para verificar que hayamos instalado ```sudo``` correctamente entraremos de nuevo en el usuario root y pondremos el comando ```sudo -V```, este comando además de mostrarnos la versión de sudo también mostrará los argumentos pasados para configurar cuando se creó sudo y los plugins que  pueden mostrar información más detallada. (Opcional) ➤ Puesto que el output del comando es muy largo si deseamos verlo completamente debemos redireccionar la salida del mismo a un fichero ```sudo -V > file.txt``` y luego editar el fichero ```nano file.txt```. O poner ```| more``` despues del comando.

<img width="799" alt="Captura de pantalla 2022-07-14 a las 2 09 59" src="https://user-images.githubusercontent.com/66915274/178857742-96356272-abd6-44c4-a3e6-5e8b9f471146.png">

4 ◦ Siguiendo en el usuario root crearemos un usuario con nuestro login con el comando ```sudo adduser login``` como nostros ya hemos creado el usuario en la instalación nos debe aparecer que el usuario ya existe.

<img width="509" alt="Captura de pantalla 2022-07-14 a las 2 15 11" src="https://user-images.githubusercontent.com/66915274/178858240-95ce2a2b-004a-4bcb-981a-7990c1cc4fdd.png">

5 ◦ Ahora deberemos crear un nuevo grupo llamado ```user42```. Para crearlo debemos hacer ```sudo addgroup user42```. 

<img width="367" alt="Screen Shot 2022-10-26 at 6 30 52 PM" src="https://user-images.githubusercontent.com/66915274/198082677-d393243e-363a-4d1f-95d8-a6695336a47a.png">

🧠 <b>Que es GID❓</b> Es el identificador de grupo, es una abreviatura de Group 🆔.

🤔 <b> Se ha creado correctamente el grupo? </b> Lo cierto es que si ya que no ha habido ningún mensaje de error, aún así podemos comprobar si se ha creado con el comando ```getent group nombre_grupo``` o también podemos hacer ```cat /etc/group``` y podremos ver todos los grupos y los usuarios que hay dentro de ellos.

6 ◦ Con el comando ```sudo adduser user group``` incluiremos al usuario en el grupo. Debemos incluir al usuario en los grupos ```sudo``` y ```user42```.

<img width="422" alt="Screen Shot 2022-10-26 at 6 32 30 PM" src="https://user-images.githubusercontent.com/66915274/198083019-c5a442bb-c625-45ce-84e1-bcbca3a7dba5.png">

<img width="404" alt="Screen Shot 2022-10-26 at 6 34 09 PM" src="https://user-images.githubusercontent.com/66915274/198083377-bd4162c6-317b-474f-8bc4-e542be4dcfde.png">

7 ◦ Una vez los hayamos introducido para checkear que todo se haya hecho correctamente podemos ejecutar el comando ```getent group nombre_grupo``` o tambien podemos editar el fichero /etc/group ```nano /etc/group``` y en los grupos ```sudo``` y ```login42``` debera aparecer nuestro usuario.

<img width="328" alt="Screen Shot 2022-10-26 at 6 35 50 PM" src="https://user-images.githubusercontent.com/66915274/198083739-ad16e388-69c3-41d1-a061-e55dd66b0d14.png">

<img width="151" alt="Screen Shot 2022-10-26 at 6 36 18 PM" src="https://user-images.githubusercontent.com/66915274/198083854-0fba5296-a49f-44cc-8427-59a692e69288.png">

<img width="353" alt="Screen Shot 2022-10-26 at 6 39 22 PM" src="https://user-images.githubusercontent.com/66915274/198084464-f73352ee-ed21-478b-a44d-d86eb6d8a1cd.png">

<img width="183" alt="Screen Shot 2022-10-26 at 6 38 25 PM" src="https://user-images.githubusercontent.com/66915274/198084311-45a50162-ff89-4e7d-a3c5-45e7048520a4.png">

### 4.2 - Instalación y configuración SSH 📶

🧠 <b> Que es SSH❓</b> Es el nombre de un protocolo y del programa que lo implementa cuya principal función es el acceso remoto a un servidor por medio de un canal seguro en el que toda la información está cifrada.

1 ◦ Lo primero que haremos será hacer ```sudo apt update``` para actualizar los repositorios que definimos en el archivo /etc/apt/sources.list

<img width="774" alt="Captura de pantalla 2022-07-14 a las 3 09 44" src="https://user-images.githubusercontent.com/66915274/178864173-aa5a08cf-8562-4484-a60a-3e1c7a533a28.png">

2 ◦ Acto seguido instalaremos la herramienta principal de conectividad para el inicio de sesión remoto con el protocolo SSH, esta herramienta es OpenSSH. Para instalarla debemos introducir el comando ```sudo apt install openssh-server```. En el mensaje de confirmación ponemos ```Y```, acto seguido esperaremos a que termine la instalación.

<img width="772" alt="Captura de pantalla 2022-07-14 a las 3 14 52" src="https://user-images.githubusercontent.com/66915274/178865991-cdb90f12-ebd8-4583-bcbb-70f47c86abe6.png">

Para comprobar que se haya instalado correctamente haremos ```sudo service ssh status``` y nos debe aparecer active.

<img width="702" alt="Captura de pantalla 2022-07-14 a las 3 53 59" src="https://user-images.githubusercontent.com/66915274/178876938-7fd74214-15df-4759-bf8d-52b53a8f4251.png">

3 ◦ Una vez terminada la instalación se han creado algunos ficheros que debemos configurar. Para ello utilizaremos [Nano](https://es.wikipedia.org/wiki/GNU_Nano) o si tu lo prefieres otro editor de texto. El primer fichero que editaremos será ```/etc/ssh/sshd_config```. Si no estas desde el usuario root no tendrás permisos de escritura, para ello haremos ```su``` y ponemos la contraseña para entrar al usuario root o si no quieres entrar en el usuario root ponemos sudo al principio del comando ```sudo nano /etc/ssh/sshd_config```.

<img width="497" alt="Captura de pantalla 2022-07-14 a las 3 24 21" src="https://user-images.githubusercontent.com/66915274/178867150-273c75c1-c935-45f0-a551-1a115d3f6f6a.png">

4 ◦ Los ```#``` al comienzo de una línea significan que esta comentada, las líneas que vayamos a modificar deberás quitarle el comentario. Una vez estemos editando el fichero deberemos modificar las siguientes líneas:

➤ #Port 22 -> Port 4242

<img width="807" alt="Captura de pantalla 2022-07-14 a las 3 31 04" src="https://user-images.githubusercontent.com/66915274/178867929-0f8be11e-d0ca-4445-af05-a693d01411bd.png">

➤ #PermitRootLogin prohibit-password -> PermitRootLogin no

<img width="798" alt="Captura de pantalla 2022-07-14 a las 3 34 13" src="https://user-images.githubusercontent.com/66915274/178868266-fc6d6684-8196-4021-b884-a047a443a3ec.png">

Una vez hayamos modificado esas líneas debemos guardar los cambios realizados sobre el fichero y dejar de editarlo.

5 ◦ Ahora debemos editar el fichero ```/etc/ssh/ssh_config```.

<img width="501" alt="Captura de pantalla 2022-07-14 a las 3 48 56" src="https://user-images.githubusercontent.com/66915274/178872582-8277e687-8ab7-4087-bd17-a71e5e86d5e6.png">

Editaremos la siguiente línea: 

➤ #Port 22 -> Port 4242

<img width="795" alt="Captura de pantalla 2022-07-14 a las 3 50 29" src="https://user-images.githubusercontent.com/66915274/178875013-1969c13f-9e43-4f2a-a037-f384a8e87a78.png">

6 ◦ Por último debemos reiniciar el servicio ssh para que así se actualicen las modificaciones que acabamos de realizar. Para ello debemos escribir el comando ```sudo service ssh restart``` y una vez reseteado miraremos el estado actual con ```sudo service ssh status``` y para confirmar que se hayan realizado los cambios en la escucha del servidor debe aparecer el Puerto 4242.

<img width="713" alt="Captura de pantalla 2022-07-14 a las 3 56 56" src="https://user-images.githubusercontent.com/66915274/178880333-0e2ad7fd-674b-4b4f-b92a-25acbc36c8a5.png">


### 4-3 Instalació y configuración de UFW 🔥🧱

🧠 <b>Que es [UFW](https://es.wikipedia.org/wiki/Uncomplicated_Firewall)❓</b> Es un [firewall](https://es.wikipedia.org/wiki/Cortafuegos_(inform%C3%A1tica)) el cual utiliza la línea de comandos para configurar las [iptables](https://es.wikipedia.org/wiki/Iptables) usando un pequeño número de comandos simples.

1 ◦ Lo primero que debemos hacer el instalar UFW, para ello haremos uso del comando ```sudo apt install ufw``` acto seguido escribiremos una ```y``` para confirmar que deseamos instalarlo y esperaremos a que termine.

<img width="771" alt="Captura de pantalla 2022-07-14 a las 19 28 55" src="https://user-images.githubusercontent.com/66915274/179045920-4a9aec64-b1d7-4785-89a1-4a299aae21a3.png">

<img width="802" alt="Captura de pantalla 2022-07-14 a las 19 29 25" src="https://user-images.githubusercontent.com/66915274/179045994-19cdf6e0-be61-454b-9adc-ba1f9c2dfd84.png">

2 ◦ Una vez instalado debemos habilitarlo , para ello debemos poner el siguiente comando ```sudo ufw enable``` y acto seguido nos debe indicar que el firewall esta activo.

<img width="498" alt="Captura de pantalla 2022-07-14 a las 19 32 57" src="https://user-images.githubusercontent.com/66915274/179046565-307c042b-243e-4224-bcb2-d02859332352.png">

3 ◦ Ahora lo que debemos hacer es que nuestro firewall permita las conexiones que se lleven a cabo mediante el puerto 4242. Lo haremos con el siguiente comando ```sudo ufw allow 4242```.

<img width="514" alt="Captura de pantalla 2022-07-14 a las 19 34 12" src="https://user-images.githubusercontent.com/66915274/179046765-5277ec55-b8e4-4d4f-a617-a2a8758b80a8.png">

4 ◦ Por último comprobaremos que esta todo correctamente configurado mirando el estado de nuestro cortafuegos , en donde ya debe aparecer como permitidas las conexiones mediante el puerto 4242. Para ver el estado daremos uso del comando ```sudo ufw status```.

<img width="575" alt="Captura de pantalla 2022-07-14 a las 19 38 37" src="https://user-images.githubusercontent.com/66915274/179047574-8073045c-6e78-4b6f-8487-cb0f490a2cd0.png">

### 4-4 Configurar contraseña fuerte para sudo 🔒

1 ◦ Crearemos un fichero en la ruta /etc/sudoers.d/ a mi fichero yo le he decidido llamar sudo_config ya que en ese fichero se almacenará la configuración de la contraseña. El comando exacto para crear el fichero es ```touch /etc/sudoers.d/sudo_config```.

<img width="511" alt="Captura de pantalla 2022-07-14 a las 22 00 40" src="https://user-images.githubusercontent.com/66915274/179072822-2f86bd8b-216e-45e4-a15b-8fe3a49149ff.png">

2 ◦ Debemos crear el directorio sudo en la ruta /var/log porque cada comando que ejecutemos con sudo , tanto el input como el output debe quedar almacenado en ese directorio. Para crearlo utilizaremos el comando ```mkdir /var/log/sudo```.

<img width="502" alt="Captura de pantalla 2022-07-14 a las 21 56 53" src="https://user-images.githubusercontent.com/66915274/179072210-ad99e50d-fa57-494b-999d-3a80dd0f7849.png">

3 ◦ Debemos editar el fichero creado en el paso 1. Como he comentado anteriormente puedes utilizar el editor que mas te guste , pero yo dare uso de nano. Comando para editar el fichero:  ```nano /etc/sudoers.d/sudo_config```.

<img width="502" alt="Captura de pantalla 2022-07-14 a las 22 04 10" src="https://user-images.githubusercontent.com/66915274/179073389-5b2a9c16-811c-4133-87c6-479e770c880b.png">

4 ◦ Una vez estamos editando el fichero deberemos introducir los siguientes comandos para cumplir todos los requisitos que pide el subject.

```
Defaults  passwd_tries=3
Defaults  badpass_message="Mensaje de error personalizado"
Defaults  logfile="/var/log/sudo/sudo_config"
Defaults  log_input, log_output
Defaults  iolog_dir="/var/log/sudo"
Defaults  requiretty
Defaults  secure_path="/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin:/snap/bin"
```

➤ Como debería verse el fichero.

<img width="1202" alt="Captura de pantalla 2022-07-16 a las 2 03 45" src="https://user-images.githubusercontent.com/66915274/179326003-1fd67295-4be2-47bd-98fc-d5821f5f1c4d.png">

🤔 <b>Que hace cada comando❓ </b>

<img width="802" alt="Captura de pantalla 2022-07-16 a las 2 04 56" src="https://user-images.githubusercontent.com/66915274/179326915-b374f679-fa2e-4e02-8b38-cdb53c6354a6.png">

### 4-5 Configuración de política de contraseñas fuerte 🔑

1 ◦ El primer paso será editar el fichero login.defs.

<img width="493" alt="Captura de pantalla 2022-07-16 a las 2 54 06" src="https://user-images.githubusercontent.com/66915274/179327943-67432d4a-7042-44ea-96f4-5975556ce4dc.png">

2 ◦ Una vez estemos editando el fichero modificaremos los siguientes parametros: 

➤ PASS_MAX_DAYS 99999 -> PASS_MAX_DAYS 30

➤ PASS_MIN_DAYS 0 -> PASS_MIN_DAYS 2


<img width="802" alt="Captura de pantalla 2022-07-16 a las 3 05 49" src="https://user-images.githubusercontent.com/66915274/179328449-32a40f67-a18d-4f29-993b-94d013cd7670.png">

PASS_MAX_DAYS: Es el tiempo de expiración de la contraseña. El numero corresponde a días.

PASS_MIN_DAYS: El número mínimo de días permitido antes de modificar una contraseña.

PASS_WARN_AGE: El usuario recibira un mensaje de aviso indicando que faltan los dias especificados para que expire su contraseña.

3 ◦ Para poder seguir con la configuración debemos instalar los siguientes paquetes con este comando ```sudo apt install libpam-pwquality``` , acto seguido pondremos ```Y``` para confirmar la instalación y esperaremos a que termine. 

<img width="770" alt="Captura de pantalla 2022-07-16 a las 3 13 52" src="https://user-images.githubusercontent.com/66915274/179328708-c5054703-bdb0-4cca-82a8-6ab25ce42b40.png">

4 ◦ Lo siguiente que debemos hacer es volver a editar un fichero y modificar algunas líneas. Haremos ```nano /etc/pam.d/common-password```. 

<img width="500" alt="Captura de pantalla 2022-07-16 a las 3 27 02" src="https://user-images.githubusercontent.com/66915274/179329260-0e18bd27-a522-4c7c-86bf-21823eee0f8b.png">

5 ◦ Despues de retry=3 debemos añadir los siguientes comandos:

```
minlen=10
ucredit=-1
dcredit=-1
lcredit=-1
maxrepeat=3
reject_username
difok=7
enforce_for_root
```
➤ Así debe ser la línea ↙️

<img width="1047" alt="Screen Shot 2023-01-03 at 7 41 57 PM" src="https://user-images.githubusercontent.com/66915274/210420896-8274b75b-86e4-4fba-9a14-ca838b61c2e6.png">

➤ Así se debe ver en el fichero ↙️

<img width="800" alt="Captura de pantalla 2022-07-16 a las 3 38 08" src="https://user-images.githubusercontent.com/66915274/179329787-1b718843-9272-43e4-8d92-8d83933cc938.png">

🤔 <b>Que hace cada comando❓</b>

minlen=10 ➤ La cantidad minima de caracteres que debe contener la contraseña.

ucredit=-1 ➤ Como mínimo debe contener una letra mayúscula. Ponemos el - ya que debe contener como mínimo un caracter, si ponemos + nos referimos a como maximo esos caracteres.

dcredit=-1 ➤ Como mínimo debe contener un digito.

lcredit=-1 ➤ Como mínimo debe contener una letra minúscula.

maxrepeat=3 ➤ No puede tener más de 3 veces seguidas el mismo caracter.

reject_username ➤ No puede contener el nombre del usuario.

difok=7 ➤  Debe tener al menos 7 caracteres que no sean parte de la antigua contraseña. 

enforce_for_root ➤ Implementaremos esta política para el usuario root.

### 4-6 Conectarse via SSH 🗣

1 ◦ Para conectarnos por SSH debemos cerrar la máquina, abrir VirtualBox y darle a configuración.

<img width="832" alt="Captura de pantalla 2022-07-18 a las 10 15 13" src="https://user-images.githubusercontent.com/66915274/179470948-d9a863ef-f1a3-41fb-a103-25378064e747.png">

2 ◦ Una vez en configuración debemos pinchar sobre el apartado de ```Red``` , pincharemos sobre ```Avanzadas``` para que así nos muestre más opciones y le daremos a ```Reenvío de puertos```.

<img width="684" alt="Captura de pantalla 2022-07-18 a las 10 18 32" src="https://user-images.githubusercontent.com/66915274/179471690-cfbdbf4b-ab93-4b12-9504-2482712652a3.png">

3 ◦ Pincharemos sobre el siguiente emoticono para agregar una regla de reenvío.

<img width="585" alt="Captura de pantalla 2022-07-18 a las 10 21 24" src="https://user-images.githubusercontent.com/66915274/179471855-913a684d-c7b0-43e2-9e01-d2c954fe75a4.png">

4 ◦ Por último agregaremos el puerto ```4242``` al anfitrión y al invitado. Las IP's no son necesarias. Pincharemos sobre el botón de aceptar para que así se apliquen los cambios.

<img width="588" alt="Captura de pantalla 2022-07-18 a las 10 22 29" src="https://user-images.githubusercontent.com/66915274/179472105-5942b3ec-5c29-4d49-a00e-67f9cde289e8.png">

➤ Para poder conectarnos a la máquina virtual desde la real debemos abrir un terminal en la máquina real y escribir ```ssh gemartin@localhost -p 4242``` nos pedirá la clave del usuario y una vez la introduzcamos ya nos saldrá el login en verde y eso significa que estaremos conectados.

<img width="517" alt="Screen Shot 2022-10-27 at 12 40 23 AM" src="https://user-images.githubusercontent.com/66915274/198174777-28f7793b-273b-43ce-b1c2-4a890353cb8c.png">

<img width="566" alt="Screen Shot 2022-10-27 at 12 40 04 AM" src="https://user-images.githubusercontent.com/66915274/198174814-c1873c62-41dd-4c1d-ad2d-f268b2da0e4c.png">

## 5- Script 🚨

Esta es una parte muy importante del proyecto. Debes prestar atención en todo, muy importante no copiar y pegar directamente el fichero sin saber que hace cada cosa. En la evaluación debes explicar cada comando si el evaluador lo pide.

🧠 <b>Que es un script❓</b> Es una secuencia de comandos guardada en un fichero que cuando se ejecuta hara la funcion de cada comando.

### 5-1 Architecture 

Para poder ver la arquitectura del SO y su versión de kernel utilizaremos el comando ```uname -a``` ( "-a" == "--all" ) que basicamente printara toda la información excepto si el tipo de procesador es desconocido o la plataforma de hardware. 

<img width="715" alt="Screen Shot 2022-10-27 at 4 50 06 PM" src="https://user-images.githubusercontent.com/66915274/198322524-8c2d305f-bfe8-4e4a-bf31-6a883af71ad3.png">

### 5-2 Núcleos físicos

Para poder mostrar el numero de nucleos fisicos haremos uso del fichero /proc/cpuinfo el cual  proporciona información acerca del procesador: su tipo, marca, modelo, rendimiento, etc. Usaremos el comando ```grep "physical id" /proc/cpuinfo | wc -l``` con el comando grep buscaremos dentro del fichero "physical id" y con wc -l contaremos las lineas del resultado de grep. Esto lo hacemos ya que la manera de cuantificar los nucleos no es muy común. Si hay un procesador marcará 0 y si tiene más de un procesador, mostrará toda la información del procesador por separado contando los procesadores usando la notación cero. De esta manera simplemente contaremos las lineas que hay ya que es más cómodo cuantificarlo así.

<img width="596" alt="Screen Shot 2022-10-27 at 4 50 49 PM" src="https://user-images.githubusercontent.com/66915274/198322799-4bf2131e-7fba-4c9e-8d1b-bb9cc1b89e76.png">


### 5-3 Núcleos virtuales

Para poder mostrar el numero de nucleos virtuales es muy parecido al anterior. Haremos uso de nuevo del fichero /proc/cpuinfo , pero, en este caso utilizaremos el comando ```grep processor /proc/cpuinfo | wc -l```. El uso es practicamente el mismo al anterior solo que en vez de contar las lineas de "physical id" lo haremos de processor. Lo hacemos así por el mismo motivo de antes, la manera de cuantificar marca 0 si hay un procesador.

<img width="586" alt="Screen Shot 2022-10-27 at 4 55 48 PM" src="https://user-images.githubusercontent.com/66915274/198324254-3d0f247d-b767-4e02-9e69-11b4e0586280.png">


### 5-4 Memoria RAM

Para mostrar la memoria ram haremos uso del comando ```free``` para así ver al momento información sobre la ram, la parte usada, libre, reservada para otros recursos, etc. Para más info sobre el comando pondremos free --help. Nosotros daremos uso de free --mega ya que en el subject aparece esa unidad de medida (Megabyte). Es importante poner --mega y no -m. Con -m nos referiremos a la unidad de medida Mebibyte y no es la que especifica el subject.

<img width="672" alt="Captura de pantalla 2022-08-02 a las 2 46 10" src="https://user-images.githubusercontent.com/66915274/182268241-86b743bb-653d-4fef-acda-e7bfa59e38d7.png">

Una vez hemos ejecutado este comando debemos filtrar nuestra busqueda ya que no necesitamos toda la información que nos aporta , lo primero que debemos mostrar es la memoria usada, para ello haremos uso del comando ```awk``` que lo que hace este comando es para procesar datos basados en archivos de texto, es decir, podremos utilizar los datos que nos interesen de X fichero. Por último lo que haremos será comparar si la primera palabra de una fila es igual a "Mem:" printaremos la tercera palabra de esa fila que será la memoria usada. Todo el comando junto seria ```free --mega | awk '$1 == "Mem:" {print $3}'```. En el script el valor de retorno de este comando se lo asignaremos a una variable que concatenaremos con otras variables para que todo quede igual como especifica el subject.

<img width="621" alt="Captura de pantalla 2022-08-02 a las 2 55 21" src="https://user-images.githubusercontent.com/66915274/182269019-d5bb3107-f091-491f-a4ab-27edd357aec8.png">

Para obtener la memoria total el comando es practicamente igual al anterior lo único que deberemos cambiar es que en vez de printar la tercera palabra de la fila queremos la segunda ```free --mega | awk '$1 == "Mem:" {print $2}'```.

<img width="605" alt="Captura de pantalla 2022-08-02 a las 3 00 02" src="https://user-images.githubusercontent.com/66915274/182269450-318816e1-fc71-48b0-a860-278cc6050e05.png">

Por última parte debemos calcular el % de memoria usada. El comando de nuevo es parecido a los anteriores la única modificación que haremos en la parte del printeo. Como la operación para conseguir el tanto porciento no es exacta nos puede dar muchos decimales y en el subject solo aparecen 2 asique nosotros haremos lo mismo, por eso utilizamos ```%.2f``` para que asi solo se muestren 2 decimales. Otra cosa que quizás no sepas es en printf para que se muestre un ```%``` hay que poner ```%%```. Todo el comando ```free --mega | awk '$1 == "Mem:" {printf("(%.2f%%)\n", $3/$2*100)}'```.

<img width="798" alt="Captura de pantalla 2022-08-02 a las 3 51 01" src="https://user-images.githubusercontent.com/66915274/182274627-195476b2-1e17-4a4c-8d5c-2056e4e2bbb6.png">

### 5-5 Memoria del disco

Para poder ver la memoria del disco ocupada y disponible utilizaremos el comando ```df``` que significa "disk filesystem" , se utiliza para obtener un resumen completo del uso del espacio en disco. Como en el subject indica la memoria utilizada se muestra en MB asi que entonces utilizaremos el flag -m. Acto seguido haremos un grep para que solo nos muestre las lineas que contengan "/dev/" y seguidamente volveremos a hacer otro grep con el flag -v para excluir las lineas que contengan "/boot". Por último utilizaremos el comando awk y sumaremos el valor de la tercera palabra de cada linea para una vez sumadas todas las lineas printar el resultado final de la suma. El comando entero es el siguiente: ```df -m | grep "/dev/" | grep -v "/boot" | awk '{memory_use += $3} END {print memory_use}'```.

<img width="805" alt="Captura de pantalla 2022-08-03 a las 2 26 15" src="https://user-images.githubusercontent.com/66915274/182498837-4f883b25-e316-4c74-8f6b-a5e8b5d13289.png">

Para obtener el espacio total utilizaremos un comando muy parecido. Las unicas diferencias seran que los valores que sumaremos seran los $2 en vez de $3 y la otra diferencia es que en el subject aparece el tamaño total en Gb asique como el resultado de la suma nos da el numero en Mb debemos transformarlo a Gb , para ello debemos dividir el numero entre 1024 y quitar los decimales.

<img width="1195" alt="Screen Shot 2023-03-14 at 8 54 34 PM" src="https://user-images.githubusercontent.com/66915274/225121482-93ae204e-54eb-4397-b25c-b3d99229bba5.png">


Por último debemos mostrar un porcentaje de la memoria usada. Para ello , de nuevo, utilizaremos un comando muy parecido a los dos anteriores. Lo unico que cambiaremos es que combinaremos los dos comandos anteriores para tener dos variables , una que representa la memoria usada y la otra la total. Hecho esto haremos una operacion para conseguir el tanto por ciento ```use/total*100``` y el resultado de esta operacion lo printaremos como aparece en el subject , entre parentesis y con el simbolo % al final. El comando final es este: ```df -m | grep "/dev/" | grep -v "/boot" | awk '{use += $3} {total += $2} END {printf("(%d%%)\n"), use/total*100}'```.

<img width="798" alt="Captura de pantalla 2022-08-03 a las 2 49 33" src="https://user-images.githubusercontent.com/66915274/182500836-dd4b068e-b6ce-4dc6-b832-f90acecfb71c.png">


### 5-6 Porcentaje uso de CPU

Para poder ver el porcentaje de uso de CPU haremos uso del comando ```vmstat``` este muestra estadísticas del sistema, permitiendo obtener un detalle general de los procesos, uso de memoria, actividad de CPU, estado del sistema, etc. Podriamos poner si ninguna opción pero en mi caso pondré un intervalo de segundos de 1 a 4. Tambien daremos uso del comando ```tail -1``` que este lo que nos va a permitir es que solo produzca el output la ultima linea, entonces de las 4 generadas solo se printara la ultima. Por ultimo solo printaremos la palabra 15 que es el uso de memoria disponible. El comando entero es el siguiente: ```vmstat 1 4 | tail -1 | awk '{print %15}'```. El resultado de este comando solo es una parte del resultado final ya que todavia hay que hacer alguna operación en el script para que quede bien. Lo que habria que hacer es a 100 restarle la cantidad que nos ha devuelto nuestro comando, el resultado de esa operación lo printaremos con un decimal y un % al final y ya estaría hecha la operación. 

<img width="580" alt="Captura de pantalla 2022-08-03 a las 0 33 39" src="https://user-images.githubusercontent.com/66915274/182484896-def71bf0-b7eb-49d8-b83b-a019d15f62f1.png">

### 5-7 Último reinicio

Para ver la fecha y hora de nuestro último reinicio haremos uso del comando ```who``` con el flag ```-b``` ya que con ese flag nos mostrará por pantalla el tiempo del último arranque del sistema. Como ya nos ha pasado anteriormente nos muestra más información de la que deseamos asique filtraremos y solo mostraremos lo que nos interesa, para ello haremos uso del comando awk y compararemos si la primera palabra de una linea es "system" se printara por pantalla la tercera palabra de esa linea , un espacio y la cuarta palabra. El comando entero seria el siguiente: ```who -b | awk '$1 == "system" {print $3 " " $4}'```.

<img width="661" alt="Captura de pantalla 2022-08-02 a las 12 24 58" src="https://user-images.githubusercontent.com/66915274/182352895-d985e675-5afc-445a-bcd3-68189702fe70.png">

### 5-8 Uso LVM

Para checkear si LVM esta activo o no haremos uso del comando lsblk , este nos muestra información de todos los dispositivos de bloque (discos duros, SSD, memorias, etc) entre toda la información que proporciona podemos ver lvm en el tipo de gestor. Para este comando haremos un if ya que o printaremos Yes o No. Basicamente la condicion que buscamos sera contar el numero de lineas en las que aparece "lvm" y si hay mas de 0 printamos Yes, si hay 0 se printara No. Todo el comando seria: ```if [ $(lsblk | grep "lvm" | wc -l) -gt 0 ]; then echo yes; else echo no; fi```.

<img width="801" alt="Captura de pantalla 2022-08-02 a las 22 38 43" src="https://user-images.githubusercontent.com/66915274/182468904-3789e22f-dbde-4874-b153-0d86497c55e2.png">

### 5-9 Conexiones TCP

Para mirar el numero de conexiones TCP establecidas. Utilizaremos el comando ```ss``` sustituyendo al ya obsoleto netstat. Filtraremos con el flag ```-ta``` para que solo se muestren las conexiones TCP. Por último haremos un grep para ver las que estan establecidas ya que tambien hay solo de escucha y cerraremos con wc -l para que cuente el numero de lineas. El comando queda tal que asi: ```ss -ta | grep ESTAB | wc -l```. 

<img width="479" alt="Captura de pantalla 2022-08-03 a las 0 53 36" src="https://user-images.githubusercontent.com/66915274/182487028-746244f8-2cda-4dc7-a14c-b2e5a7e0dc51.png">

### 5-10 Número de usuarios

Daremos uso del comando ```users``` que nos mostrará el nombre de los usuarios que hay, sabiendo esto, pondremos wc -w para que cuente la cantidad de palabras que hay en la salida del comando. El comando entero queda así ```users | wc -w```.

<img width="380" alt="Captura de pantalla 2022-08-02 a las 12 33 29" src="https://user-images.githubusercontent.com/66915274/182354436-282547cf-22c8-4b03-9484-6801c0466de7.png">


### 5-11 Dirección IP y MAC

Para obtener la dirección del host haremos uso del comando ```hostname -I``` y para obtener la MAC haremos uso del comando ```ip link``` que se utiliza para mostrar o modificar las interfaces de red. Como aparecen más de una interfaz, IP's etc. Utilizaremos el comando grep para buscar lo que deseamos y asi poder printar por pantalla solo lo que nos piden. Para ello pondremos ```ip link | grep "link/ether" | awk '{print $2}'``` y de esta manera solo printaremos la MAC.

<img width="639" alt="Captura de pantalla 2022-08-02 a las 14 53 14" src="https://user-images.githubusercontent.com/66915274/182379380-8e3b803d-d001-42ae-8aea-467e8c9f3ea9.png">

### 5-12 Número de comandos ejecutados con sudo

Para poder obtener el numero de comandos que son ejecutados con sudo haremos uso del comando jornalctl que este es una herramienta que se encarga de recopilar y administrar los registros del sistema. Acto seguido pondremos ```_COMM=sudo``` par así filtrar las entradas especificando su ruta. En nuestro ponemos ```_COMM``` ya que hace referencia a un script ejecutable. Una vez tengamos filtrada la busqueda y solo aparezcan los registros de sudo todavía deberemos filtrar un poco más ya que cuando incias o cierras sesion de root tambien aparece en el registro, entonces para terminar de filtrar pondremos un ```grep COMMAND``` y asi solo apareceran las lineas de comandos. Por ultimo pondremos ```wc -l``` para que asi nos salgan enumeradas las lineas. El comando entero es el siguiente: ```journalctl _COMM=sudo | grep COMMAND | wc -l)```. Para comprobar que funcione correctamente podemos correr el comando en el terminal, poner un comando que incluya sudo y volver a correr el comando y deberá
incrementar el número de ejecucciones de sudo.

<img width="632" alt="Captura de pantalla 2022-08-02 a las 23 50 39" src="https://user-images.githubusercontent.com/66915274/182479668-949b8eee-81f6-4593-83f4-99053d199f1b.png">

### 5-13 Resultado total del script

⚠️ Recuerda no hacer copia y pega si no sabes el funcionamiento de cada comando ⚠️

```
#!/bin/bash

# ARCH
arch=$(uname -a)

# CPU PHYSICAL
cpuf=$(grep "physical id" /proc/cpuinfo | wc -l)

# CPU VIRTUAL
cpuv=$(grep "processor" /proc/cpuinfo | wc -l)

# RAM
ram_total=$(free --mega | awk '$1 == "Mem:" {print $2}')
ram_use=$(free --mega | awk '$1 == "Mem:" {print $3}')
ram_percent=$(free --mega | awk '$1 == "Mem:" {printf("%.2f"), $3/$2*100}')

# DISK
disk_total=$(df -m | grep "/dev/" | grep -v "/boot" | awk '{disk_t += $2} END {printf ("%.1fGb\n"), disk_t/1024}')
disk_use=$(df -m | grep "/dev/" | grep -v "/boot" | awk '{disk_u += $3} END {print disk_u}')
disk_percent=$(df -m | grep "/dev/" | grep -v "/boot" | awk '{disk_u += $3} {disk_t+= $2} END {printf("%d"), disk_u/disk_t*100}')

# CPU LOAD
cpul=$(vmstat 1 2 | tail -1 | awk '{printf $15}')
cpu_op=$(expr 100 - $cpul)
cpu_fin=$(printf "%.1f" $cpu_op)

# LAST BOOT
lb=$(who -b | awk '$1 == "system" {print $3 " " $4}')

# LVM USE
lvmu=$(if [ $(lsblk | grep "lvm" | wc -l) -gt 0 ]; then echo yes; else echo no; fi)

# TCP CONNEXIONS
tcpc=$(ss -ta | grep ESTAB | wc -l)

# USER LOG
ulog=$(users | wc -w)

# NETWORK
ip=$(hostname -I)
mac=$(ip link | grep "link/ether" | awk '{print $2}')

# SUDO
cmnd=$(journalctl _COMM=sudo | grep COMMAND | wc -l)

wall "	Architecture: $arch
	CPU physical: $cpuf
	vCPU: $cpuv
	Memory Usage: $ram_use/${ram_total}MB ($ram_percent%)
	Disk Usage: $disk_use/${disk_total} ($disk_percent%)
	CPU load: $cpu_fin%
	Last boot: $lb
	LVM use: $lvmu
	Connections TCP: $tcpc ESTABLISHED
	User log: $ulog
	Network: IP $ip ($mac)
	Sudo: $cmnd cmd"
```
Script visto desde nano ↙️

<img width="911" alt="Captura de pantalla 2022-08-03 a las 3 47 31" src="https://user-images.githubusercontent.com/66915274/182506484-f5a095b8-4751-461e-a114-f8e36b4cfa9a.png">

Resultado tras la ejecución del script ↙️

<img width="796" alt="Captura de pantalla 2022-08-03 a las 3 46 15" src="https://user-images.githubusercontent.com/66915274/182506357-f5466a97-380b-4b6d-9b79-89e01a31498a.png">

## 6- Crontab ⏰

🧠 <b>Que es crontab? </b>Es un administrador de procesos en segundo plano. Los procesos indicados seran ejecutados en el momento que especifiques en el fichero crontab.

Para tener correctamente crontab configurado debemos editar el fichero crontab con el siguiente comando ```sudo crontab -u root -e```. 

En el fichero debemos añadir el siguiente comando para que el script se ejecute cada 10 minutos ```*/10 * * * * sh /ruta del script```. 

<img width="798" alt="Captura de pantalla 2022-08-03 a las 4 40 18" src="https://user-images.githubusercontent.com/66915274/182512395-eaebabc2-5866-4ae3-966c-1a80818cde07.png">

Funcionamiento de cada parametro de crontab: 

m ➤ Corresponde al minuto en que se va a ejecutar el script, el valor va de 0 a 59.

h ➤ La hora exacta, se maneja el formato de 24 horas, los valores van de 0 a 23, siendo 0 las 12:00 de la medianoche.
dom ➤ hace referencia al día del mes, por ejemplo se puede especificar 15 si se quiere ejecutar cada dia 15.

dow ➤ Significa el día de la semana, puede ser numérico (0 a 7, donde 0 y 7 son domingo) o las 3 primeras letras del día en inglés: mon, tue, wed, thu, fri, sat, sun.

user ➤ Define el usuario que va a ejecutar el comando, puede ser root, u otro usuario diferente siempre y cuando tenga permisos de ejecución del script.

command ➤ Refiere al comando o a la ruta absoluta del script a ejecutar.

## 7- Signature.txt 📝

Para obtener la firma lo primero que debemos hacer es apagar la máquina virtual ya que una vez la enciendas o modifiques algo la firma cambiará.

<img width="834" alt="Captura de pantalla 2022-08-03 a las 4 47 32" src="https://user-images.githubusercontent.com/66915274/182513283-1cfc319f-982d-47cf-a596-8475d4c96616.png">

El siguiente paso será ubicarnos en la ruta donde tengamos el .vdi de nuestra maquina virtual. 

<img width="465" alt="Screen Shot 2022-08-03 at 4 57 37 AM" src="https://user-images.githubusercontent.com/66915274/182514499-f0ad5ba7-c0c2-493e-b0ae-9b79c970816e.png">

Por último haremos ```shasum nombremaquina.vdi``` y esto nos dara la firma. El resultado de esta firma es lo que tendremos añadir a nuestro fichero signature.txt para posteriormente subir el fichero al repositorio de la intra. Muy importante no volver a abrir la maquina ya que se modificara la firma. Para las correcciones recuerda clonar la maquina ya que asi podras encenderla sin miedo a que cambie la firma.

🧠 <b> Que es shasum❓</b> Es un comando que permite identificar la integridad de un fichero mediante la suma de comprobación del hash SHA-1 de un archivo.

<img width="416" alt="Screen Shot 2022-08-03 at 4 58 48 AM" src="https://user-images.githubusercontent.com/66915274/182514627-f11026d0-de0d-447d-a2e4-31a3c1af0f35.png">

## 8- Bonus ⭐️

### 8.1- Particionado manual del disco

1 ◦ En el momento de escoger el particionado de disco seleccionaremos manual. De esta manera podremos editar las particiones una a una.

<img width="789" alt="Screen Shot 2022-10-23 at 4 30 48 PM" src="https://user-images.githubusercontent.com/66915274/197397840-b6ae9d65-a6aa-4a5d-a03f-856d9ce81644.png">

2 ◦ En este apartado nos muestra una descripción general de nuestras particiones y puntos de montaje. Actualmente no tenemos particiones hechas. Para crear una nueva tabla de particiones debemos escoger el dispositivo donde queremos crearlas. En nuestro caso escogeremos el único disponible.

<img width="793" alt="Screen Shot 2022-10-23 at 4 35 39 PM" src="https://user-images.githubusercontent.com/66915274/197398114-44abc561-d34d-47c9-b512-581b4ec6fddb.png">

3 ◦ Aceptamos el mensaje de confirmación. Básicamente nos avisa que si ya hay particiones en el dispositivo seran eliminadas y que si estamos seguros de crear una nueva tabla de particiones vacía..

<img width="770" alt="Screen Shot 2022-10-23 at 4 36 08 PM" src="https://user-images.githubusercontent.com/66915274/197398137-b9fe1f96-5907-462e-8a50-44b71ae2aefe.png">

4 ◦ Una vez hemos completado el paso anterior podemos ver como nos aparece nuestra tabla de particiones vacía. Ahora debemos configurarla , para ello debemos seleccionarla.

<img width="786" alt="Screen Shot 2022-10-23 at 4 36 35 PM" src="https://user-images.githubusercontent.com/66915274/197398172-b05fa7aa-e5b4-40cb-afd4-03a1404d7885.png">

5 ◦ Crearemos una nueva partición.

<img width="512" alt="Screen Shot 2022-10-23 at 4 36 54 PM" src="https://user-images.githubusercontent.com/66915274/197398199-70570553-de1b-49a9-8c44-da9a1e4b5c1e.png">

Empezaremos creando esta:

![image](https://user-images.githubusercontent.com/66915274/197427077-48636236-4012-4edf-b0e4-319db502e685.png)

6 ◦ Como bien indica el subject el tamaño de la partición debe ser de 500 megabytes.

<img width="777" alt="Screen Shot 2022-10-23 at 4 37 27 PM" src="https://user-images.githubusercontent.com/66915274/197398241-604b2bb2-7303-412a-b382-40bfbf443ed0.png">

7 ◦ Escogemos el tipo de la partición. Escogemos primaria ya que será la partición donde se encontrará instalado el Sistema Operativo.

<img width="457" alt="Screen Shot 2022-10-23 at 4 37 38 PM" src="https://user-images.githubusercontent.com/66915274/197398253-2c0f8205-3d3f-4ab7-94a3-70c37ee014d9.png">

Descripción breve de todos los tipos de particiones:

◦ <b>Primaria:</b> La única partición en la que puede estar instalada un SO. Solo pueden haber 4 particiones primarias por disco duro o 3 primarias y una extendida.

◦ <b>Secundario/Extendida:</b>  Fue ideada para romper la limitación de 4 particiones primarias en un solo disco físico. Solo puede existir una partición de este tipo por disco, y solo sirve para contener particiones lógicas.

◦ <b>Lógica:</b>  Ocupa una porción de la partición extendida/primaria o la totalidad de la misma, la cual se ha formateado con un tipo específico de sistema de archivos (en nuestro caso usaremos ext4) y se le ha asignado una unidad, así el sistema operativo reconoce las particiones lógicas o su sistema de archivos. Puede haber un máximo de 23 particiones lógicas en una partición extendida , sin embargo linux el SO con el que trabajamos actualmente lo reduce a 15, más que suficientes para realizar este proyecto. 

8 ◦ Seleccionaremos beginning ya que queremos que la nueva partición se cree al principio del espacio disponible.

<img width="787" alt="Screen Shot 2022-10-23 at 4 37 52 PM" src="https://user-images.githubusercontent.com/66915274/197398265-c63d7b32-55b7-45ad-86b3-166e44cfd598.png">

9 ◦ En la siguiente captura nos muestra los detalles de la partición. Modificaremos el punto de montaje al que escifica el subject.

<img width="781" alt="Screen Shot 2022-10-23 at 4 38 27 PM" src="https://user-images.githubusercontent.com/66915274/197398293-2487ded0-2584-48c4-a5ea-1f2464ec39f9.png">

10 ◦ Escogemos boot como el punto de montaje de nuestra partición.

<img width="577" alt="Screen Shot 2022-10-23 at 4 38 49 PM" src="https://user-images.githubusercontent.com/66915274/197398322-51b9854b-ab32-4d81-8126-3ef3913858a6.png">

11 ◦ Terminamos de configurar la partición actual.

<img width="787" alt="Screen Shot 2022-10-23 at 4 39 07 PM" src="https://user-images.githubusercontent.com/66915274/197398336-72b17153-73dc-48a5-b7d3-839877e8983b.png">

12 ◦ Una vez hemos completado el paso anterior ya nos debe aparecer la partición. Ahora debemos crear una partición lógica con todo el espacio disponible del disco, que no tenga punto de montaje y que este encriptada. Para ello seleccionamos el espacio libre donde queremos crearla.

<img width="781" alt="Screen Shot 2022-10-23 at 4 39 37 PM" src="https://user-images.githubusercontent.com/66915274/197398367-ee8a1f5d-3941-4a86-a775-90f29b1c955e.png">

![image](https://user-images.githubusercontent.com/66915274/197431553-718358bb-6570-41dd-b114-09acc347999d.png)

13 ◦ Creamos nueva partición.

<img width="462" alt="Screen Shot 2022-10-23 at 4 39 58 PM" src="https://user-images.githubusercontent.com/66915274/197398396-843c7fb3-b945-4305-a960-02aa9d4ca940.png">

14 ◦ Seleccionamos el tamaño máximo.

<img width="779" alt="Screen Shot 2022-10-23 at 4 40 26 PM" src="https://user-images.githubusercontent.com/66915274/197398425-63205376-839f-4986-a8d0-981cdaa380e4.png">

15 ◦ Seleccionamos el tipo de particion, en este caso lógica.

<img width="466" alt="Screen Shot 2022-10-23 at 4 40 53 PM" src="https://user-images.githubusercontent.com/66915274/197398448-49c99180-9a3d-4dd4-a9ce-d680bfdefa1c.png">

16 ◦ Modificaremos el punto de montaje.

<img width="788" alt="Screen Shot 2022-10-23 at 4 41 44 PM" src="https://user-images.githubusercontent.com/66915274/197398500-188cc4fb-4eb5-4a56-893b-58838877c056.png">

17 ◦ Escogeremos la opción de no montarlo.

<img width="590" alt="Screen Shot 2022-10-23 at 4 42 11 PM" src="https://user-images.githubusercontent.com/66915274/197398518-f6fb7588-8c53-40a9-9ceb-238d6a62d942.png">

18 ◦ Terminamos de configurar la partición actual.

<img width="788" alt="Screen Shot 2022-10-23 at 4 42 41 PM" src="https://user-images.githubusercontent.com/66915274/197398541-922f2c4d-ed5a-4d92-8083-ccf57aec3dee.png">

19 ◦ Configuraremos volúmenes encriptados. Para asi poder encriptar nuestra partición.

<img width="786" alt="Screen Shot 2022-10-23 at 4 43 08 PM" src="https://user-images.githubusercontent.com/66915274/197398562-2369fa90-7db9-4ba3-abed-7ac15ede8b81.png">

20 ◦ Aceptamos el mensaje de confirmación.

<img width="777" alt="Screen Shot 2022-10-23 at 4 43 27 PM" src="https://user-images.githubusercontent.com/66915274/197398573-9720e351-04f4-49f0-a3dc-fe0ce1ada296.png">

21 ◦ Creamos los volúmenes encriptados.

<img width="596" alt="Screen Shot 2022-10-23 at 4 43 46 PM" src="https://user-images.githubusercontent.com/66915274/197398595-b36ab8da-86c6-483a-99fd-079293a92570.png">

22 ◦ Seleccionamos en que partición queremos realizar la encriptación.

<img width="568" alt="Screen Shot 2022-10-23 at 4 44 06 PM" src="https://user-images.githubusercontent.com/66915274/197398615-7c9f8e45-7885-4f39-84eb-e3a056eeb2c7.png">

23 ◦ Terminamos de configurar la partición actual.

<img width="787" alt="Screen Shot 2022-10-23 at 4 44 35 PM" src="https://user-images.githubusercontent.com/66915274/197398649-06749ec8-903d-4b1a-af2a-c2dad77bcaec.png">

24 ◦ Finalizamos ya que no queremos crear mas volúmenes encriptados.

<img width="589" alt="Screen Shot 2022-10-23 at 4 44 49 PM" src="https://user-images.githubusercontent.com/66915274/197398663-0bd74c65-b3fd-430c-b3e6-4f1e0c76ae8d.png">

25 ◦ Aceptamos el mensaje de confirmación. Nos comenta que que se encriptara todo lo que hay dentro de la partición y que no debe tardar mucho en terminar.

<img width="783" alt="Screen Shot 2022-10-23 at 4 45 06 PM" src="https://user-images.githubusercontent.com/66915274/197398670-91db3e3e-b271-4e1b-ad8a-28ceb06e0897.png">

26 ◦ Nos da igual si tarda mucho o poco , le damos a cancel ya que no hay nada que encriptar ya que la partición esta vacía.

<img width="789" alt="Screen Shot 2022-10-23 at 4 45 27 PM" src="https://user-images.githubusercontent.com/66915274/197398685-6603ef31-d499-46da-949f-ade8e2a05bf9.png">

27 ◦ De nuevo deberemos poner una contraseña, esta vez será la frase de encriptación. Como te he comentado previamente deberás repetir el proceso y la debes anotar ya que será importante en un futuro.

<img width="779" alt="Screen Shot 2022-10-23 at 4 48 38 PM" src="https://user-images.githubusercontent.com/66915274/197398855-0c93f419-897e-4eee-9499-18321d8e8dfd.png">

28 ◦ Repetimos la frase de encriptación.

<img width="722" alt="Screen Shot 2022-10-23 at 4 49 01 PM" src="https://user-images.githubusercontent.com/66915274/197398875-3fa85638-7105-42bf-bbc2-e189fbbc1918.png">

29 ◦ Configuraremos el gestor de volumenes logicos. 

<img width="785" alt="Screen Shot 2022-10-23 at 4 50 17 PM" src="https://user-images.githubusercontent.com/66915274/197398933-85e0025e-0a4d-41f0-8fd0-5f0c8ee32e9b.png">

30 ◦ Aceptaremos en mensaje de confirmación ya que estamos de acuerdo con que se guarden los cambion en el disco.

<img width="786" alt="Screen Shot 2022-10-23 at 4 50 42 PM" src="https://user-images.githubusercontent.com/66915274/197398945-d79ea2a7-a13e-4e6a-9e9c-40bdcd2dd502.png">

31 ◦ Crearemos un nuevo grupo de volumen. Los grupos de volúmenes agrupan particiones.

<img width="454" alt="Screen Shot 2022-10-23 at 4 52 04 PM" src="https://user-images.githubusercontent.com/66915274/197399021-29b21274-37c1-4fd9-8526-962969d1cce3.png">

32 ◦ Introduciremos el nombre que queremos darle. ```LVMGroup``` tal y como indica el subject.

<img width="695" alt="Screen Shot 2022-10-23 at 4 52 58 PM" src="https://user-images.githubusercontent.com/66915274/197399065-1ac8d80d-9e18-4b4a-a60f-11496e7de26d.png">

33 ◦ Seleccionaremos la partición donde queremos cear el grupo. 

<img width="590" alt="Screen Shot 2022-10-23 at 4 53 22 PM" src="https://user-images.githubusercontent.com/66915274/197399089-5ea5f48e-176c-4278-8b14-a13b7f5ee45c.png">

34 ◦ Ahora debemos crear todas las particiones lógicas. Al tener que repetir las mismas acciones varias veces hay capturas que no serán documentadas.

![image](https://user-images.githubusercontent.com/66915274/197439138-889d6368-1875-402b-a094-bd146bb7cb8a.png)


<img width="457" alt="Screen Shot 2022-10-23 at 4 53 50 PM" src="https://user-images.githubusercontent.com/66915274/197399108-fb566eb4-664f-4509-8948-ab4ed04407b5.png">

35 ◦ Empezaremos escogiendo el grupo donde queremos que se creen. Seleccionamos el único disponible (el que acabamos de crear). 

<img width="760" alt="Screen Shot 2022-10-23 at 4 54 02 PM" src="https://user-images.githubusercontent.com/66915274/197399115-e7d3b313-763c-421c-a71d-850d318432e7.png">

36 ◦ El orden de la creación de las unidades lógicas será el mismo que indica el subject asique empezaremos por root y acabaremos por var-log. Entonces seleccionaremos el nombre del volumen lógico.

<img width="662" alt="Screen Shot 2022-10-23 at 4 55 42 PM" src="https://user-images.githubusercontent.com/66915274/197399188-6ae8c83b-057d-498f-b112-9116079b0808.png">

37 ◦ Tamaño como bien indica el subject será de 10g.

<img width="782" alt="Screen Shot 2022-10-23 at 4 56 21 PM" src="https://user-images.githubusercontent.com/66915274/197399216-c65f43ca-fb8e-4d05-9212-24ad2ee87b39.png">

38 ◦ Repetimos el proceso para ```swap```. Solo cambiaremos el nombre y el tamaño.

<img width="443" alt="Screen Shot 2022-10-23 at 4 56 49 PM" src="https://user-images.githubusercontent.com/66915274/197399239-c26598cb-e7bb-474c-aece-90f043e1990f.png">

<img width="751" alt="Screen Shot 2022-10-23 at 4 57 26 PM" src="https://user-images.githubusercontent.com/66915274/197399278-c5cd5a9c-2ab1-42b9-8871-b58e9b33b4b6.png">

<img width="667" alt="Screen Shot 2022-10-23 at 4 57 41 PM" src="https://user-images.githubusercontent.com/66915274/197399288-7ecf6adf-aaf5-46bf-959f-2159d19b7bbf.png">

<img width="782" alt="Screen Shot 2022-10-23 at 4 58 11 PM" src="https://user-images.githubusercontent.com/66915274/197399310-fc6c397e-8257-4e06-8fba-ad35431c9b96.png">

39 ◦ Repetimos el proceso para ```home```. Solo cambiaremos el nombre y el tamaño.

<img width="476" alt="Screen Shot 2022-10-23 at 4 58 57 PM" src="https://user-images.githubusercontent.com/66915274/197399347-a815d58b-686e-4d9d-bb5c-34a7b54476ab.png">

<img width="756" alt="Screen Shot 2022-10-23 at 4 59 07 PM" src="https://user-images.githubusercontent.com/66915274/197399355-28617029-c28c-4ca4-b56b-646e066cded6.png">

<img width="672" alt="Screen Shot 2022-10-23 at 5 01 13 PM" src="https://user-images.githubusercontent.com/66915274/197399433-1e9c7110-9240-4982-9835-b026ed73171f.png">

<img width="770" alt="Screen Shot 2022-10-23 at 5 04 34 PM" src="https://user-images.githubusercontent.com/66915274/197399610-247a7a35-0141-4c14-884e-7ecd07caa96d.png">

40 ◦ Repetimos el proceso para ```var```. Solo cambiaremos el nombre y el tamaño.

<img width="482" alt="Screen Shot 2022-10-23 at 5 05 10 PM" src="https://user-images.githubusercontent.com/66915274/197399644-58da651c-f4ad-4d1e-b128-de87c92cc292.png">

<img width="700" alt="Screen Shot 2022-10-23 at 5 05 30 PM" src="https://user-images.githubusercontent.com/66915274/197399662-32ab0a06-c14d-4a0e-ac80-cb0d12fc24eb.png">

<img width="774" alt="Screen Shot 2022-10-23 at 5 06 03 PM" src="https://user-images.githubusercontent.com/66915274/197399693-b49c2ffe-b21a-43c5-bd3f-160bc544b072.png">

41 ◦ Repetimos el proceso para ```srv```. Solo cambiaremos el nombre.

<img width="446" alt="Screen Shot 2022-10-23 at 5 06 14 PM" src="https://user-images.githubusercontent.com/66915274/197399702-6d531de3-690d-458d-9a3b-bf6ceedd7cda.png">

<img width="754" alt="Screen Shot 2022-10-23 at 5 06 39 PM" src="https://user-images.githubusercontent.com/66915274/197399724-0fdd75ad-e978-4468-8509-a62cdc4a3faf.png">

<img width="671" alt="Screen Shot 2022-10-23 at 5 06 57 PM" src="https://user-images.githubusercontent.com/66915274/197399744-b82b1dcd-09c7-44cc-a2ab-b6079abcbb5a.png">

<img width="771" alt="Screen Shot 2022-10-23 at 5 07 13 PM" src="https://user-images.githubusercontent.com/66915274/197399757-94732b16-585e-4f7d-a20f-f7ef0814b4e7.png">

42 ◦ Repetimos el proceso para ```tmp```. Solo cambiaremos el nombre.

<img width="481" alt="Screen Shot 2022-10-23 at 5 07 34 PM" src="https://user-images.githubusercontent.com/66915274/197399777-9d871f2a-856d-4b4d-ad18-1195001b0fdf.png">

<img width="732" alt="Screen Shot 2022-10-23 at 5 07 46 PM" src="https://user-images.githubusercontent.com/66915274/197399792-0794ace5-c236-4f68-b023-bb471753eba2.png">

<img width="659" alt="Screen Shot 2022-10-23 at 5 07 55 PM" src="https://user-images.githubusercontent.com/66915274/197399798-84a31102-6953-468b-85d4-0a248e98cb17.png">

<img width="768" alt="Screen Shot 2022-10-23 at 5 08 19 PM" src="https://user-images.githubusercontent.com/66915274/197399827-5dfc8571-e82c-4a28-aae7-dc716fb6e77b.png">

43 ◦ Por último repetimos el proceso para ```var-log```. Solo cambiaremos el nombre y el tamaño.

<img width="448" alt="Screen Shot 2022-10-23 at 5 08 34 PM" src="https://user-images.githubusercontent.com/66915274/197399838-2cd49171-45dd-469a-887c-3ce99d84b7cd.png">

<img width="762" alt="Screen Shot 2022-10-23 at 5 08 40 PM" src="https://user-images.githubusercontent.com/66915274/197399841-04b75112-4d21-456c-bf50-8335839764e0.png">

<img width="658" alt="Screen Shot 2022-10-23 at 5 08 59 PM" src="https://user-images.githubusercontent.com/66915274/197399859-d706de2e-bb20-4a04-96db-4dd57b3778be.png">

<img width="779" alt="Screen Shot 2022-10-23 at 5 09 28 PM" src="https://user-images.githubusercontent.com/66915274/197399886-a1e9ee69-78a4-4071-af99-2192d535c6cd.png">


44 ◦ Una vez hayamos completado todos los pasos anteriores finalizaremos la configuración del gestor de volúmenes lógicos.

<img width="438" alt="Screen Shot 2022-10-23 at 5 09 51 PM" src="https://user-images.githubusercontent.com/66915274/197399904-c584fcdf-eb38-486f-af12-7374f1e04465.png">

45 ◦ Ahora podemos observar como en el apartado donde nos muestran todas nuestras particiones y espacio libre ya aparecen todas las particiones lógicas que acabamos de crear. Bien , debemos configurar todas para seleccionar el sistema de archivos que queremos y el punto de montaje que indica el subject. De nuevo iremos por orden y seleccionaremos la primera que nos aparece que es ```home```.

<img width="783" alt="Screen Shot 2022-10-23 at 5 10 36 PM" src="https://user-images.githubusercontent.com/66915274/197399944-bccbe599-b80a-4abe-ac6c-d770447ea727.png">

46 ◦ Nos muestra la configuración de la partición. Debemos escoger un sistema de ficheros ya que actualmente no tiene.

<img width="782" alt="Screen Shot 2022-10-23 at 5 10 55 PM" src="https://user-images.githubusercontent.com/66915274/197399976-9b871bda-9425-4dbe-b8c9-25c8c6d6c811.png">

47 ◦ Escogemos el sistema de archivos Ext4, es el sistema de archivos más utilizado en distribuciones Linux.  

<img width="412" alt="Screen Shot 2022-10-23 at 5 11 18 PM" src="https://user-images.githubusercontent.com/66915274/197400000-2e855fc9-10b1-4f3e-9c58-85b6ff02a4fb.png">

48 ◦ Ahora debemos seleccionar el punto de montaje. 

<img width="782" alt="Screen Shot 2022-10-23 at 5 11 44 PM" src="https://user-images.githubusercontent.com/66915274/197400023-387a70aa-b491-43c0-91d2-cb378da9fc75.png">

49 ◦ Seleccionamos ```home``` como bien indica el subject.

<img width="515" alt="Screen Shot 2022-10-23 at 5 11 54 PM" src="https://user-images.githubusercontent.com/66915274/197400040-e79cad4f-368b-4cee-9ec0-942f38b2f785.png">

50 ◦ Una vez ya lo hemos seleccionado terminaremos la configuración de la partición.

<img width="785" alt="Screen Shot 2022-10-23 at 5 12 10 PM" src="https://user-images.githubusercontent.com/66915274/197400059-ab96f2c4-cd92-47cb-a9ee-61257537ee6a.png">

51 ◦ De nuevo estos pasos se pueden volver muy repetitivos asique no comentare mucho. Repetimos todo igual (excepto el punto de montaje) para ```root```.

<img width="782" alt="Screen Shot 2022-10-23 at 5 13 36 PM" src="https://user-images.githubusercontent.com/66915274/197400135-c08444fe-e39d-45fa-a3b6-3c73db2a4935.png">

<img width="782" alt="Screen Shot 2022-10-23 at 5 13 53 PM" src="https://user-images.githubusercontent.com/66915274/197400146-41ce0b0c-142c-46b4-a3c5-918676a3a852.png">

<img width="421" alt="Screen Shot 2022-10-23 at 5 14 08 PM" src="https://user-images.githubusercontent.com/66915274/197400155-92759327-5671-41f4-8104-dd1de4bc88cb.png">

<img width="775" alt="Screen Shot 2022-10-23 at 5 14 22 PM" src="https://user-images.githubusercontent.com/66915274/197400171-6fd04783-e833-4afd-a753-4b943133a4ab.png">

<img width="525" alt="Screen Shot 2022-10-23 at 5 14 39 PM" src="https://user-images.githubusercontent.com/66915274/197400182-780e1917-3f77-4986-b0e8-b50a90d75403.png">

<img width="790" alt="Screen Shot 2022-10-23 at 5 14 52 PM" src="https://user-images.githubusercontent.com/66915274/197400186-88da831a-c672-4ec0-a64c-0ad2808bb6c5.png">

52 ◦ Repetimos el proceso para ```srv``` y cambiaremos el punto de montaje.

<img width="778" alt="Screen Shot 2022-10-23 at 5 15 05 PM" src="https://user-images.githubusercontent.com/66915274/197400198-599b4aa3-a511-45d1-86b0-dd42da4c380f.png">

<img width="778" alt="Screen Shot 2022-10-23 at 5 15 31 PM" src="https://user-images.githubusercontent.com/66915274/197400218-e6b26eb7-7933-426f-a7cd-a791400ebdab.png">

<img width="428" alt="Screen Shot 2022-10-23 at 5 15 37 PM" src="https://user-images.githubusercontent.com/66915274/197400222-95107b34-8d28-4d4d-a74b-7de6c6a46d33.png">

<img width="787" alt="Screen Shot 2022-10-23 at 5 15 44 PM" src="https://user-images.githubusercontent.com/66915274/197400227-20c13dc0-52cd-4c70-bf4e-531979c54a3e.png">

<img width="530" alt="Screen Shot 2022-10-23 at 5 15 52 PM" src="https://user-images.githubusercontent.com/66915274/197400238-3b403294-74d1-4e63-aca7-7d83447ed5b8.png">

<img width="790" alt="Screen Shot 2022-10-23 at 5 16 04 PM" src="https://user-images.githubusercontent.com/66915274/197400249-035f6b9d-3716-4565-9776-aa0af49b3fd7.png">

53 ◦ Para ```swap``` haremos una excepción ya el sistema de archivos será diferente. Seleccionamos ```swap```.

<img width="780" alt="Screen Shot 2022-10-23 at 5 16 32 PM" src="https://user-images.githubusercontent.com/66915274/197400272-112b44ef-4996-438a-90b8-6620cdd7d2ff.png">

54 ◦ En el momento de seleccionar el sistema de archivos lo dejamos en ```swap area```.

<img width="785" alt="Screen Shot 2022-10-23 at 5 16 41 PM" src="https://user-images.githubusercontent.com/66915274/197400281-e12ee636-8696-4bee-9198-862b7d6be199.png">

55 ◦ Una vez realizado el paso anterior terminaremos la configuración de la partición.

<img width="370" alt="Screen Shot 2022-10-23 at 5 16 59 PM" src="https://user-images.githubusercontent.com/66915274/197400297-8eed129d-0ec0-49a8-8b2a-dd0d04055f75.png">

<img width="787" alt="Screen Shot 2022-10-23 at 5 17 09 PM" src="https://user-images.githubusercontent.com/66915274/197400309-74e83209-4b2a-4e27-9a67-44373c1db362.png">

56 ◦ Ahora si volveremos a hacer lo mismo que antes pero ahora lo haremos con ```tmp``` y cambiando el punto de montaje.

<img width="777" alt="Screen Shot 2022-10-23 at 5 17 41 PM" src="https://user-images.githubusercontent.com/66915274/197400341-608516f6-0f5a-4cdd-83d8-c8fbd1635624.png">

<img width="778" alt="Screen Shot 2022-10-23 at 5 17 49 PM" src="https://user-images.githubusercontent.com/66915274/197400346-e9647c7a-a9a2-4a0f-b439-a912247fb3f9.png">

<img width="372" alt="Screen Shot 2022-10-23 at 5 18 01 PM" src="https://user-images.githubusercontent.com/66915274/197400360-1816d06a-252e-4d41-b1a2-fc547961f353.png">

<img width="781" alt="Screen Shot 2022-10-23 at 5 18 08 PM" src="https://user-images.githubusercontent.com/66915274/197400370-0474b71f-c1c3-445f-ba02-088dc1c64ce3.png">

<img width="496" alt="Screen Shot 2022-10-23 at 5 18 24 PM" src="https://user-images.githubusercontent.com/66915274/197400386-f66494c5-97b9-4bb9-8c75-5856d69d26cc.png">

<img width="783" alt="Screen Shot 2022-10-23 at 5 18 40 PM" src="https://user-images.githubusercontent.com/66915274/197400405-4a368bfb-f862-4bbd-a33e-b87c3038d232.png">

57 ◦ Repetimos de nuevo el proceso para ```var``` cambiando el punto de montaje.

<img width="773" alt="Screen Shot 2022-10-23 at 5 19 13 PM" src="https://user-images.githubusercontent.com/66915274/197400447-85bcad13-8083-4aec-acb2-fa467e5d4e33.png">

<img width="790" alt="Screen Shot 2022-10-23 at 5 19 21 PM" src="https://user-images.githubusercontent.com/66915274/197400452-aed22368-4889-4c04-bf60-5a06fb93944e.png">

<img width="386" alt="Screen Shot 2022-10-23 at 5 19 28 PM" src="https://user-images.githubusercontent.com/66915274/197400459-b6f59948-e804-414a-b41d-21d2f495fccc.png">

<img width="780" alt="Screen Shot 2022-10-23 at 5 19 36 PM" src="https://user-images.githubusercontent.com/66915274/197400462-788d29e5-7798-418a-8725-3cb8dd2849bd.png">

<img width="515" alt="Screen Shot 2022-10-23 at 5 19 51 PM" src="https://user-images.githubusercontent.com/66915274/197400473-4508d9d6-481d-4f3a-9630-6c1eba7c5cc0.png">

<img width="779" alt="Screen Shot 2022-10-23 at 5 20 00 PM" src="https://user-images.githubusercontent.com/66915274/197400482-1f8c147f-66d8-438b-866f-3e9eff75ef5e.png">

58 ◦ Por último repetimos de nuevo el proceso para ```var-log``` en este deberemos introducir manualmente el punto de montaje.

<img width="772" alt="Screen Shot 2022-10-23 at 5 20 23 PM" src="https://user-images.githubusercontent.com/66915274/197400513-53b3f899-47f5-4cdb-ab4b-205b1d1bce31.png">

![image](https://user-images.githubusercontent.com/66915274/197602511-fa34155b-3244-4b0c-8054-2778edecfb16.png)

![image](https://user-images.githubusercontent.com/66915274/197602585-03b540af-5d7a-4364-b90a-559bac0cb2a2.png)

![image](https://user-images.githubusercontent.com/66915274/197602630-cc749189-9ac9-48bc-a595-dc33282840ec.png)

![image](https://user-images.githubusercontent.com/66915274/197602673-5c18be85-1b0f-430b-b507-66711b807115.png)

![image](https://user-images.githubusercontent.com/66915274/197602699-fddadd2d-c54d-4313-8165-a93db1249b26.png)

![image](https://user-images.githubusercontent.com/66915274/197602741-431bd866-1558-4735-bb34-ab57dc5745b7.png)

59 ◦ Una vez hemos completado todos los pasos anteriores ya casi hemos acabado, debemos darle a finalizar el particionado y asi se guarden todos los cambios en el disco.

![image](https://user-images.githubusercontent.com/66915274/197602907-4a3ba459-1a5d-468e-81dc-5206403cf034.png)

60 ◦ Aceptamos el mensaje y asi se guardaran los cambios. Asegurate que todas las particiones quedan igual que en la captura.

![image](https://user-images.githubusercontent.com/66915274/197602944-13ca67b2-bcc5-476c-84dc-aadc5e1d3baf.png)

61 ◦ Seleccionamos la opción ```No``` ya que no necesitamos paquetes adicionales. 

<img width="770" alt="Captura de pantalla 2022-07-13 a las 20 05 42" src="https://user-images.githubusercontent.com/66915274/178801099-2dda24f5-0d46-4184-8c44-a8fe0bf46527.png">

62 ◦ Escogemos nuestro País.

<img width="756" alt="Captura de pantalla 2022-07-13 a las 20 14 23" src="https://user-images.githubusercontent.com/66915274/178802653-d9e8504a-b60b-4441-8ee3-8d48ca4a6bf0.png">

63 ◦ Escogemos ```deb.debian.org``` ya que tenindo en cuenta nuestra region es donde tendremos una mejor conexión.

<img width="792" alt="Captura de pantalla 2022-07-13 a las 20 15 00" src="https://user-images.githubusercontent.com/66915274/178802772-4f67cd99-60d5-4439-8502-317e81e07d70.png">

64 ◦ Esta opción la dejaremos vacía le daremos directamente a ```Continue```.

<img width="797" alt="Captura de pantalla 2022-07-13 a las 20 17 24" src="https://user-images.githubusercontent.com/66915274/178803208-2969acae-3fa7-423e-8a3c-bb7c76eff824.png">

65 ◦ Seleccionamos la opcion ```No``` ya que no queremos que los developers vean nuestras estadísticas aunque sean anónimas.

<img width="796" alt="Captura de pantalla 2022-07-13 a las 20 21 54" src="https://user-images.githubusercontent.com/66915274/178803926-a4efbc70-f3e2-4e6c-9809-9152478d8237.png">

66 ◦ Quitaremos todas las opciones de software (con la barra espaciadora) y le daremos a ```Continue```.

<img width="797" alt="Captura de pantalla 2022-07-13 a las 20 24 17" src="https://user-images.githubusercontent.com/66915274/178804377-e775b89e-93d4-482f-a4d0-0ef126f47719.png">

67 ◦ Seleccionaremos ```Yes``` para instalar [GRUB boot](https://es.wikipedia.org/wiki/GNU_GRUB) en el disco duro.

<img width="792" alt="Captura de pantalla 2022-07-13 a las 20 26 24" src="https://user-images.githubusercontent.com/66915274/178804771-ba16e0b7-9f06-4c5b-9451-0bfd65efd2bb.png">

68 ◦ Escogeremos el dispositivo para la instalación del cargador de arranque ```/dev/sda (ata_VBOX_HARDDISK)```.

<img width="792" alt="Captura de pantalla 2022-07-13 a las 20 35 46" src="https://user-images.githubusercontent.com/66915274/178806441-f1bf3159-4e09-4c9a-9102-b3261c9000d8.png">

69 ◦ Le daremos a ```Continue``` para finalizar la instalación. 

<img width="794" alt="Captura de pantalla 2022-07-13 a las 20 39 30" src="https://user-images.githubusercontent.com/66915274/178807102-e2a9722e-791f-48a0-ae35-b05b36a37ed2.png">

70 ◦ Una vez hemos terminado con la instalación de debian debemos configurar nuestra máquina virtual.

[Click aqui para dirigirte a la configuración de la máquina virtual ⚙️](#4-configuración-de-la-máquina-virtual-%EF%B8%8F)

### 8.2 - Wordpress y configuración de servicios 🌐

### Lighttpd 

🧠 <b> Que es Lighttpd❓</b> Es un servidor web diseñado para ser rápido, seguro, flexible, y fiel a los estándares. Está optimizado para entornos donde la velocidad es muy importante. Esto se debe a que consume menos CPU y memoria RAM que otros servidores.

1 ◦ Instalación de paquetes de lighttpd.

<img width="791" alt="Screen Shot 2022-10-27 at 4 09 24 AM" src="https://user-images.githubusercontent.com/66915274/198174389-428c30e0-c437-4bc1-b8df-40dd2fb0c0ce.png">

2 ◦ Permitimos las conexiones mediante el puerto 80 con el comando ```sudo ufw allow 80```.

<img width="306" alt="Screen Shot 2022-10-27 at 4 15 24 AM" src="https://user-images.githubusercontent.com/66915274/198175046-8ea3f052-32f1-4107-a9a1-c9271d6c9ce6.png">

3 ◦ Checkeamos que realmente hayamos permitido. Debe aparecer el puerto 80 y allow.

<img width="460" alt="Screen Shot 2022-10-27 at 4 15 45 AM" src="https://user-images.githubusercontent.com/66915274/198175075-da6833f1-2360-4e08-b708-99f920b8215c.png">

4 ◦ Añadimos la regla que incluya el puerto 80. Si no recuerdas como se añadian reglas en el reenvío de puertos. Configuración de la máquina → Red → Reenvío de puertos → Replicar la captura.

<img width="877" alt="Screen Shot 2022-11-18 at 2 49 56 PM" src="https://user-images.githubusercontent.com/66915274/202720044-d7a51add-c5ee-4da4-9057-258e47cfd036.png">

### WordPress 

🧠 <b> Que es Wordpress❓</b> Es un sistema de gestión de contenidos enfocado a la creación de cualquier tipo de página web.

1 ◦ Para instalar la última versión de WordPress primero debemos instalar wget y zip. Para ello haremos uso del siguiente comando ```sudo apt install wget zip```.

🧠 <b> Que es wget❓</b> Es una herramienta de línea de comandos que se utiliza para descargar archivos de la web.

🧠 <b> Que es zip❓</b> Es una utilidad de línea de comandos para comprimir y descomprimir archivos en formato ZIP.

<img width="584" alt="Screen Shot 2022-11-18 at 2 45 11 PM" src="https://user-images.githubusercontent.com/66915274/202719000-dfc10731-7d29-4976-9867-d2a38e0f6407.png">

2 ◦ Una vez hayamos instalado los paquetes nos debemos ubicar en la carpeta /var/www/ con el comando cd accederemos a ella ```cd /var/wwww```.

<img width="361" alt="Screen Shot 2022-11-18 at 2 45 53 PM" src="https://user-images.githubusercontent.com/66915274/202719112-c238f259-2a59-41ea-bbaa-8676742b2ef2.png">

3 ◦ Una vez estemos en la ruta /var/www/ deberemos descargar la última versión de WordPress. Como mi idioma nativo es el español yo seleccionaré la última versión en español. Utilizaremos el siguiente comando: ```sudo wget https://es.wordpress.org/latest-es_ES.zip```.

<img width="779" alt="Screen Shot 2022-11-18 at 2 47 00 PM" src="https://user-images.githubusercontent.com/66915274/202719349-442e9fd5-f96a-48af-8d7a-ea8a91a4d380.png">

4 ◦ Descomprimimos el archivo que acabamos de descargar con el comando ```sudo unzip latest-es_ES.zip```.

<img width="444" alt="Screen Shot 2022-11-18 at 2 47 25 PM" src="https://user-images.githubusercontent.com/66915274/202719435-99d6af72-98f4-47b0-befb-0f3e45db4520.png">

5 ◦ Renombraremos la carpeta html y la llamaremos html_old. ```sudo mv html/ html_old/```.

<img width="402" alt="Screen Shot 2022-11-18 at 2 48 21 PM" src="https://user-images.githubusercontent.com/66915274/202719636-8deea2b6-2953-43da-86a7-17f76c14440a.png">

6 ◦ Ahora renombraremos la carpeta wordpress y la llamaremos html. ```sudo mv wordpress/ html```.

<img width="398" alt="Screen Shot 2022-11-18 at 2 48 49 PM" src="https://user-images.githubusercontent.com/66915274/202719749-4c914197-3891-4bcc-afb8-54c94b5f77cb.png">

7 ◦ Por último estableceremos estos permisos en la carpeta html. Daremos uso del comando ```sudo chmod -R 755 html```. El número 7 indica que el propietario tiene permisos de lectura, escritura y ejecución. El número 5 indica que el grupo y otros solo tienen permisos de lectura y ejecución.

<img width="396" alt="Screen Shot 2022-11-18 at 2 49 17 PM" src="https://user-images.githubusercontent.com/66915274/202719852-48b9ee14-3b15-49e2-bbd2-ca172a1f65ef.png">

### Mariadb

🧠 <b> Que es MariaDB❓</b> Es una base de datos. Se utiliza para diversos fines, como el almacenamiento de datos, el comercio electrónico, funciones a nivel empresarial y las aplicaciones de registro. 

1 ◦ Instalaremos los paquetes con el comando ```sudo apt install mariadb-server```

<img width="797" alt="Screen Shot 2022-10-27 at 4 17 09 AM" src="https://user-images.githubusercontent.com/66915274/198175218-65dec75f-5727-425c-97d0-2baa2b8cd457.png">

2 ◦ Debido a que la configuración predeterminada deja su instalación de MariaDB poco segura, utilizaremos un script que proporciona el paquete mariadb-server para restringir el acceso al servidor y eliminar las cuentas no utilizadas. Ejecutaremos el script con el siguiente comando ```sudo mysql_secure_installation```. Una vez ejecutemos el script nos hara una serie de preguntas.Preguntará si deseamos cambiar a la autenticación de socket de Unix. Como ya tenemos una cuenta root protegida escribiremos ```N```.

```
Switch to unix_socket autentication? → N
Change the root password? → N
Remove anonymous users? → Y
Disallow root login remotely? → Y
Remove test database and acces to it? → Y
Reaload privilege tables now? → Y
````

<img width="629" alt="Screen Shot 2022-10-27 at 4 19 25 AM" src="https://user-images.githubusercontent.com/66915274/198175511-d826b699-770e-4142-b464-cd6a91211d6a.png">

<img width="704" alt="Screen Shot 2022-10-27 at 1 00 20 AM" src="https://user-images.githubusercontent.com/66915274/198175719-b22bd572-ab50-4590-9298-5f5a69f98862.png">

<img width="551" alt="Screen Shot 2022-10-27 at 1 00 40 AM" src="https://user-images.githubusercontent.com/66915274/198175732-eff97e65-d8ef-4b44-8930-62d58d910598.png">

Switch to unix_socket autentication? Escogemos ```N``` porque no deseamos que cambie a la auntenticación de socket de Unix ya tenemos una cuenta root protegida.

Change the root password? Escogemos ```N```. No deseamos cambiar la contraseña del usuario root. Por defecto no tenemos contraseña pero en mariadb realmente no es root ya que debemos darle permisos de administrador.

Remove anonymous users? Escogemos ```Y```. Por defecto cuando instalas mariadb tiene un usuario anonimo, lo que permite que cualquier persona inicie sesión en mariadb sin tener que crear una cuenta de usuario propia. Esto esta diseñado para realizar pruebas y que la instalación sea más fluida. Cuando dejemos el entorno de desarrollo y queramos pasar a un entorno de producción debemos eliminar los usuarios anonimos. 

Disallow root login remotely? Escogemos ```Y```. Al deshabilitar el inicio de sesion en root de forma remota evitaremos que alguien pueda adivinar la contraseña root. Solo podremos conectarnos al root desde localhost.

Remove test database and acces to it? Escogemos ```Y```. De esta manera se eliminará la base de datos de prueba y cualquier usuario que tenga acceso a ella.

Reaload privilege tables now? Escogemos ```Y```. Asi se recargarán las tablas de permisos de MySQL para que los cambios en la configuración de seguridad entren en vigor de inmediato.

1 ◦ Una vez hayamos terminado con la instalación de mariadb debemos crear la base de datos y el usuario para el WordPress. Lo primero debemos acceder a mariadb.

<img width="492" alt="Screen Shot 2023-03-31 at 12 16 28 AM" src="https://user-images.githubusercontent.com/66915274/228976032-2a3bd66e-ce88-4bc1-9264-1d5d7f88f295.png">

2 ◦ Creamos una base de datos para el WordPress. En mi caso le voy a llamar wp_database. Todo esto lo hare con el comando ```CREATE DATABASE wp_database;```.

<img width="384" alt="Screen Shot 2023-03-31 at 9 53 17 PM" src="https://user-images.githubusercontent.com/66915274/229216821-fba3d891-c477-4e68-9799-57bcb9efcde3.png">

3 ◦ Para asegurarnos que se ha creado la base de datos para el WordPress podemos ver todas las bases existentes con el comando ```SHOW DATABASES;```.

<img width="282" alt="Screen Shot 2023-03-31 at 9 54 04 PM" src="https://user-images.githubusercontent.com/66915274/229216973-fa35f5e1-04f1-4e56-8c44-55c4ad5a8745.png">

4 ◦ Acto seguido debemos crearemos un usuario dentro de la base de datos. Utilizaremos el comando ```CREATE USER 'gemartin'@'localhost' IDENTIFIED BY '12345';```.

<img width="616" alt="Screen Shot 2023-03-31 at 9 56 59 PM" src="https://user-images.githubusercontent.com/66915274/229217478-6f7f5f3c-12cb-4d5a-981c-6fd53f884aa3.png">

5 ◦ Vinculamos el nuevo usuario a nuestra base de datos de manera que le otorguemos los permisos necesario para poder trabajar. Daremos uso del comando ```GRANT ALL PRIVILEGES ON wp_database.* TO 'gemartin'@'localhost';```.

<img width="669" alt="Screen Shot 2023-03-31 at 10 01 32 PM" src="https://user-images.githubusercontent.com/66915274/229218529-e2cdcb3f-f8bc-4474-8e7b-c1cf9499aa57.png">

6 ◦ Actualizamos los permisos para que los cambios tengan efecto con el comando ```FLUSH PRIVILEGES;```.

<img width="321" alt="Screen Shot 2023-03-31 at 10 02 01 PM" src="https://user-images.githubusercontent.com/66915274/229218623-bad5faf3-231e-4472-a617-2ead2e713313.png">

7 ◦ Una vez hemos completado el paso anterior ya podemos salir de mariadb.

<img width="295" alt="Screen Shot 2023-04-01 at 10 43 40 PM" src="https://user-images.githubusercontent.com/66915274/229313206-36b09583-1930-4754-b70a-8d4caa38db9e.png">

### PHP

🧠 <b> Que es PHP❓</b> Es un lenguaje de programación. Se utiliza principalmente para desarrollar aplicaciones web dinámicas y sitios web interactivos. PHP se ejecuta en el lado del servidor.

1 ◦ Instalamos los paquetes necesarios para poder ejecutar aplicaciones web escritas en lenguaje PHP y que necesiten conectarse a una base de datos MySQL. Ejecutaremos el siguiente comando ```sudo apt install php-cgi php-mysql```.

<img width="541" alt="Screen Shot 2023-03-31 at 10 07 04 PM" src="https://user-images.githubusercontent.com/66915274/229308102-24ddd152-8687-410d-b207-953d36c9b591.png">

### Configuración WordPress

1 ◦ Accedemos al directorio /var/www/html con el comando: ```cd /var/www/html```

<img width="326" alt="Screen Shot 2023-04-01 at 8 26 46 PM" src="https://user-images.githubusercontent.com/66915274/229308150-88ec9c15-4791-4541-baf2-5d2267b94eec.png">

2 ◦ Copiamos el fichero wp-config-sample.php y lo renombraremos wp-config.php

<img width="616" alt="Screen Shot 2023-04-01 at 8 28 42 PM" src="https://user-images.githubusercontent.com/66915274/229308231-a022e3b4-1606-4958-b530-5b2ada908997.png">

3 ◦ Una vez lo hayamos renombrado editaremos el fichero wp-config.php ```nano wp-config.php``` y modificaremos los siguientes valores.

<img width="841" alt="Screen Shot 2023-04-01 at 8 42 25 PM" src="https://user-images.githubusercontent.com/66915274/229308713-bbbb69f4-5f6c-4146-bc10-006cd968fb95.png">

Hay que remplazarlos por los valores que hemos puesto anteriormente cuando creábamos la base de datos y el usuario para que WordPress pueda conectar y hacer uso de ella.

<img width="842" alt="Screen Shot 2023-04-01 at 8 46 08 PM" src="https://user-images.githubusercontent.com/66915274/229308845-4eac418d-c03f-48d1-9b74-463ef56a2ee5.png">

4 ◦ Habilitamos el módulo fastcgi-php en Lighttpd para mejorar el rendimiento y la velocidad de las aplicaciones web en el servidor. ```sudo lighty-enable-mod fastcgi```

![image](https://user-images.githubusercontent.com/66915274/230748612-8253b2ee-15c6-42e0-8745-2148f48c6962.png)

5 ◦ Habilitamos el módulo fastcgi-php en Lighttpd para mejorar el rendimiento y la velocidad de las aplicaciones web basadas en PHP en el servidor. ```sudo lighty-enable-mod fastcgi-php```

![image](https://user-images.githubusercontent.com/66915274/230748560-bd225efc-ea65-4a7d-bf08-eb72d61da58e.png)

6 ◦ Actualizamos y aplicamos los cambios en la configuración con el comando ```sudo service lighttpd force-reload```.

![image](https://user-images.githubusercontent.com/66915274/230748835-9b44222d-e978-4a74-a501-e993c528a2a5.png)

7 ◦ Una vez ya hemos completado los pasos anteriores podemos volver a dirigirnos a nuestro navegador y escribiremos ```localhost```. Nos deberá salir lo siguiente:

<img width="674" alt="Screen Shot 2023-04-01 at 8 49 00 PM" src="https://user-images.githubusercontent.com/66915274/229308949-6224a7c8-2dda-414a-b313-c14e981aca01.png">

<img width="1075" alt="Screen Shot 2023-04-01 at 8 00 38 PM" src="https://user-images.githubusercontent.com/66915274/229308962-d39b1b6b-62cc-49d1-ad13-a016d6e73683.png">

8 ◦ Debemos rellenar todos los campos. En mi caso he puesto lo siguiente:

<img width="793" alt="Screen Shot 2023-04-01 at 8 02 29 PM" src="https://user-images.githubusercontent.com/66915274/229309346-c712fff4-1530-42c8-ad9e-a59f85d4de51.png">

9 ◦ Una vez hayamos rellenado todos los campos debemos darle a ```Instalar WordPress``` y ya habremos terminado la instalación. Nos saldrá la siguiente pestaña. Ahora WordPress puede crear las tablas y volcar todos los datos que necesita para funcionar en la base de datos que le hemos asignado.

<img width="798" alt="Screen Shot 2023-04-01 at 8 02 52 PM" src="https://user-images.githubusercontent.com/66915274/229309399-719f525e-7859-468f-a9e6-6b6954102153.png">

10 ◦ Si accedemos de nuevo a nuestro localhost desde el navegador ya podemos ver nuestra página funcional.

<img width="2560" alt="Screen Shot 2023-04-01 at 9 02 51 PM" src="https://user-images.githubusercontent.com/66915274/229309529-96f3a1bb-d4a2-434f-bc01-2f2db0e0839d.png">

11 ◦ Si queremos acceder al panel de administrador para hacer cambios en nuestra página deberemos poner en el navegador ```localhost/wp-admin``` y iniciaremos sesión con nuestra cuenta.

<img width="368" alt="Screen Shot 2023-04-01 at 9 05 41 PM" src="https://user-images.githubusercontent.com/66915274/229309619-024d5dcc-ea8d-4895-88f3-bb65fcdca7e2.png">

<img width="359" alt="Screen Shot 2023-04-01 at 9 06 44 PM" src="https://user-images.githubusercontent.com/66915274/229309653-02e398e9-0c28-470e-825d-1431f7ca2bc2.png">

12 ◦ Una vez accedamos ya podemos modificar lo que queramos a gusto propio. Personalizar la página es algo opcional, como no está especificado en el subject en esta guia no se tratará nada al respecto. 

<img width="1100" alt="Screen Shot 2023-04-01 at 9 07 38 PM" src="https://user-images.githubusercontent.com/66915274/229309676-b670be09-47dd-445f-969a-bb41131aa3f9.png">


### 8.3 - Servicio adicional ➕

### LiteSpeed ⚡️

🧠 <b> Que es LiteSpeed❓</b> Es un software de servidor web patentado. Es el cuarto servidor web más popular, y se estima que lo utiliza el 10% de los sitios web.

1 ◦ Antes de instalar cualquier software, es importante asegurarse de que el sistema esté actualizado.

```sudo apt update```

<img width="701" alt="Screen Shot 2022-11-25 at 2 59 17 AM" src="https://user-images.githubusercontent.com/66915274/203885206-209ac64f-51a3-42e4-814e-2063cf83a156.png">


```sudo apt upgrade```

<img width="507" alt="Screen Shot 2022-11-25 at 3 00 18 AM" src="https://user-images.githubusercontent.com/66915274/203885306-3b3eb6cd-64cb-4d34-967a-19e650286cf5.png">

2 ◦ De forma predeterminada, OpenLiteSpeed está disponible en el repositorio base de Debian 11. Entonces, debes ejecutar el siguiente comando para agregar el repositorio OpenLiteSpeed a su sistema Debian:

```wget -O - http://rpms.litespeedtech.com/debian/enable_lst_debian_repo.sh | sudo bash```

Como el comando es largo me he conectado via ssh.

<img width="1129" alt="Screen Shot 2022-11-25 at 3 05 49 AM" src="https://user-images.githubusercontent.com/66915274/203885808-b4e0ff9a-580c-4121-b06f-ec229e514df9.png">

3 ◦ De nuevo, actualizamos los paquetes y instalaremos OpenLiteSpeed.

```sudo apt update```

<img width="627" alt="Screen Shot 2022-11-25 at 3 07 31 AM" src="https://user-images.githubusercontent.com/66915274/203885968-e0297682-b18c-4363-8fcb-7553cd908f91.png">

```sudo apt install openlitespeed```

<img width="801" alt="Screen Shot 2022-11-25 at 3 11 22 AM" src="https://user-images.githubusercontent.com/66915274/203886321-dbda490e-726d-4dfb-aa91-b9e10206976a.png">


4 ◦ La contraseña predeterminada para OpenLiteSpeed es 123456. Cambiaremos la contraseña a algo más seguro con el siguiente comando.

```sudo /usr/local/lsws/admin/misc/admpass.sh```

<img width="607" alt="Screen Shot 2022-11-25 at 3 12 33 AM" src="https://user-images.githubusercontent.com/66915274/203886432-cb14665f-63a0-4373-919d-0dff7c04b212.png">

5 ◦ Configuramos el firewall para permitir las conexiones mediante los puertos 8088 y 7080. Acto seguido agregaremos las reglas en el reenvio de puertos.

```sudo ufw allow 8088/tcp```

<img width="446" alt="Screen Shot 2022-11-25 at 3 15 39 AM" src="https://user-images.githubusercontent.com/66915274/203886798-41d4c14f-cb4a-4982-bd92-82ade321f244.png">

```sudo ufw allow 7080/tcp```

<img width="445" alt="Screen Shot 2022-11-25 at 3 15 59 AM" src="https://user-images.githubusercontent.com/66915274/203886833-f9016672-8fda-46fc-87a9-cd194de3cc1b.png">

```sudo ufw reload```

<img width="393" alt="Screen Shot 2022-11-25 at 3 16 18 AM" src="https://user-images.githubusercontent.com/66915274/203886863-03406d5c-456a-4e80-83e9-1bf3904154d3.png">

Reglas en el reenvio de puertos.

<img width="825" alt="Screen Shot 2022-11-25 at 3 16 52 AM" src="https://user-images.githubusercontent.com/66915274/203886923-1db4cf56-d197-4c41-87f6-846253e08450.png">


6 ◦ Una vez completado el paso anterior ya podemos conectarnos. Pondremos en el buscador de nuestro navegador ```localhost:7080``` proporcionamos nuestras credenciales de inicio de sesión y ya tendremos acceso a todo.

<img width="800" alt="Screen Shot 2022-11-25 at 3 18 53 AM" src="https://user-images.githubusercontent.com/66915274/203887182-73d29abc-674c-4ace-bffb-de42b636ec38.png">

<img width="1206" alt="Screen Shot 2022-11-24 at 8 49 24 PM" src="https://user-images.githubusercontent.com/66915274/203856104-d4454636-2f45-4e51-8cf5-a1501398ea57.png">

<br>
<br>
<br>

#
# Este tutorial ha llevado mucho trabajo, si crees que te ha sido útil agradeceria mucho starred 🌟 para que así se comparta y pueda ayudar a más estudiantes 👨🏻‍🎓❤️
<br>
<br>
<br>


## 9- Hoja de corrección ✅

<img width="773" alt="Screen Shot 2023-01-22 at 5 13 44 PM" src="https://user-images.githubusercontent.com/66915274/214894873-b92fcaeb-251b-46fb-8ab8-fb8f861976ab.png">

<img width="772" alt="Screen Shot 2023-01-22 at 5 14 52 PM" src="https://user-images.githubusercontent.com/66915274/214894986-a0697331-8395-4f2b-9acd-50052b5b0f40.png">

<img width="772" alt="Screen Shot 2023-01-22 at 5 15 10 PM" src="https://user-images.githubusercontent.com/66915274/214895053-482efa21-b254-41ca-8239-c5f183a4ff41.png">

<img width="772" alt="Screen Shot 2023-01-22 at 5 15 22 PM" src="https://user-images.githubusercontent.com/66915274/214895097-ec42a53a-b897-4af8-adec-eb99aa6554c8.png">

## 9-1 Respuestas de la evaluación 💯

### ▪️ Que es una maquina virtual❓

Es un software que simula un sistema de computación y puede ejecutar programas como si fuese una computadora real. Permite crear múltiples entornos simulados o recursos dedicados desde un solo sistema de hardware físico. 

### ▪️ Porque has escogido Debian❓

Esto es algo personal para cada uno, mi opinion: El propio subject explica que es mas sencillo hacerlo en Debian y si buscas documentacion/tutoriales hay muchos y todos se han hecho en debian.

### ▪️ Diferencias basicas entre Rocky y Debian

![182516961-c3e4da77-2db8-4737-a68f-27b033908705 (1) (1)](https://user-images.githubusercontent.com/66915274/182517306-edb92eac-cba4-444a-83f8-9692bac69231.png)

### ▪️ Cual es el proposito de las maquinas virtuales❓

Su objetivo es el de proporcionar un entorno de ejecución independiente de la plataforma de hardware y del sistema operativo, que oculte los detalles de la plataforma subyacente y permita que un programa se ejecute siempre de la misma forma sobre cualquier plataforma.

### ▪️ Diferencias entre apt y aptitude ↙️

Aptitude es una version mejorada de apt. APT es un administrador de paquetes de nivel inferior y aptitude es un administrador de paquetes de alto nivel. Otra gran diferencia es la funcionalidad que ofrecen ambas herramientas. Aptitude ofrece una mejor funcionalidad en comparación con apt-get. Ambos son capaces de de proporcionar los medios necesarios para realizar la gestión de paquetes. Sin embargo, si se busca un enfoque con mas caracteristicas, debería ser, Aptitude. 

### ▪️ Que es APPArmor❓

Es un módulo de seguridad del kernel Linux que permite al administrador del sistema restringir las capacidades de un programa.

### ▪️ Que es LVM❓

Es un gestor de volúmenes lógicos. Proporciona un método para asignar espacio en dispositivos de almacenamiento masivo, que es más flexible que los esquemas de particionado convencionales para almacenar volúmenes.

## 9-2 Comandos de la evaluación ⌨️

1 ◦ Comprobar que no haya ninguna interfaz grafica en uso.

Utilizaremos el comando ```ls /usr/bin/*session``` y nos debe aparecer el mismo resultado que en la captura. Si aparece algo diferente se esta utilizando una interfaz grafica.

<img width="352" alt="Screen Shot 2022-11-25 at 12 00 02 AM" src="https://user-images.githubusercontent.com/66915274/203872315-0e87428b-5c5a-475b-9d7c-350eafbe3bea.png">

2 ◦ Comprobar que el servicio UFW esta en uso.

```sudo ufw status```

<img width="326" alt="Screen Shot 2022-11-24 at 1 25 06 AM" src="https://user-images.githubusercontent.com/66915274/203668014-bd228793-3532-4494-8b01-d046e4930c10.png">

```sudo service ufw status```

<img width="720" alt="Screen Shot 2022-11-24 at 1 25 37 AM" src="https://user-images.githubusercontent.com/66915274/203668066-6a3420d4-ae72-4263-8474-2e4946e2367a.png">

3 ◦ Comprobar que el servicio SSH esta en uso.

```sudo service ssh status```

<img width="711" alt="Screen Shot 2022-11-24 at 1 26 43 AM" src="https://user-images.githubusercontent.com/66915274/203668165-e642c21f-a11e-48b1-bed5-83639445251e.png">

4 ◦ Comprobar que utilizas el sistema operativo Debian o Centos.

```uname -v``` o ```uname --kernel-version```

<img width="306" alt="Screen Shot 2022-11-24 at 1 37 17 AM" src="https://user-images.githubusercontent.com/66915274/203669122-0be5033c-c882-4a2e-bf22-6a680f998a56.png">

5 ◦ Comprobar que tu usuario este dentro de los grupos "sudo" y "user42".

```getent group sudo```

```getent group user42```

<img width="314" alt="Screen Shot 2022-11-24 at 3 26 30 AM" src="https://user-images.githubusercontent.com/66915274/203680444-5fb18ae1-724e-4f78-a77f-a0f5bcc04913.png">

6 ◦ Crear un nuevo usuario y mostrar que sigue la politica de contraseñas que hemos creado.

```sudo adduser name_user``` y introducimos una contraseña que siga la politica.

<img width="465" alt="Screen Shot 2022-11-24 at 3 29 45 AM" src="https://user-images.githubusercontent.com/66915274/203680847-b4555fd4-f847-4bce-b944-edf3e7720c99.png">

7 ◦ Creamos un nuevo grupo llamado "evaluating". 

```sudo addgroup evaluating```

<img width="363" alt="Screen Shot 2022-11-24 at 3 30 47 AM" src="https://user-images.githubusercontent.com/66915274/203680980-784b2b60-82f4-405a-9f07-ec4948e86868.png">

8 ◦ Añadimos el nuevo usuario al nuevo grupo.

```sudo adduser name_user evaluating```

<img width="411" alt="Screen Shot 2022-11-24 at 3 33 08 AM" src="https://user-images.githubusercontent.com/66915274/203681233-096b200a-2b99-4638-81f3-a3bff046c0db.png">

Para comprobar que se haya introducido correctamente.

<img width="356" alt="Screen Shot 2022-11-24 at 3 33 31 AM" src="https://user-images.githubusercontent.com/66915274/203681267-106e4d37-0ec4-4006-95a4-88dd7109c4b6.png">

9 ◦ Comprobar que el hostname de la maquina es correcto login42.

<img width="224" alt="Screen Shot 2022-11-24 at 3 37 27 AM" src="https://user-images.githubusercontent.com/66915274/203681701-4f9b9ff1-28b6-4d06-9489-f930eee4b6e5.png">


10 ◦ Modificar hostname para remplazar tu login por el del evaluador. En este caso lo reemplazare por student42.

```sudo nano /etc/hostname``` y remplazamos nuestro login por el nuevo.

<img width="445" alt="Screen Shot 2022-11-24 at 3 42 30 AM" src="https://user-images.githubusercontent.com/66915274/203682323-dfd14846-9c98-48d0-9c83-56739de3220b.png">

<img width="525" alt="Screen Shot 2022-11-24 at 3 43 47 AM" src="https://user-images.githubusercontent.com/66915274/203682470-598a9dbf-ef28-4ef5-86cf-8caeef083ec3.png">

```sudo nano /etc/hosts``` y remplazamos nuestro login por el nuevo.

<img width="418" alt="Screen Shot 2022-11-24 at 3 44 08 AM" src="https://user-images.githubusercontent.com/66915274/203682512-5dd1452d-a704-466b-b9e1-89aa472fada6.png">

<img width="512" alt="Screen Shot 2022-11-24 at 3 44 35 AM" src="https://user-images.githubusercontent.com/66915274/203682562-36741000-6203-4a98-9de7-53afb24d6ea2.png">

Reiniciamos la maquina.

<img width="358" alt="Screen Shot 2022-11-24 at 3 44 58 AM" src="https://user-images.githubusercontent.com/66915274/203682614-60b10a36-c5d9-478b-a119-73e32a87b7fb.png">

Una vez nos hemos logueado de nuevo podemos ver como el hostname se ha cambiado correctamente.

<img width="263" alt="Screen Shot 2022-11-24 at 3 46 30 AM" src="https://user-images.githubusercontent.com/66915274/203682819-bd35ff17-3810-4644-9c44-93957e41d181.png">

11 ◦ Comprobar que todas las particiones son como indica el subject.

```lsblk```

<img width="495" alt="Screen Shot 2022-11-24 at 3 52 17 AM" src="https://user-images.githubusercontent.com/66915274/203683496-b49a7ada-2a0c-4f87-a013-e307370b3900.png">

12 ◦ Comprobar que sudo esta instalado.

```which sudo```

<img width="275" alt="Screen Shot 2022-11-24 at 4 00 42 AM" src="https://user-images.githubusercontent.com/66915274/203684520-1340d8dc-1b13-4828-9056-2631e659ddcf.png">

Utilizar which realmente no es una buena practica ya que no todos los paquetes se encuentran en las rutas donde which busca, aun asi para la evaluacion es mejor ya que es un comando sencillo y facil de aprender. Para un mejor uso haremos uso del siguiente comando:

```dpkg -s sudo```

<img width="789" alt="Screen Shot 2022-11-24 at 4 02 13 AM" src="https://user-images.githubusercontent.com/66915274/203684698-d66c3c5b-2d6b-43c5-8f63-1a3cddaf7b4d.png">

13 ◦ Introducimos el nuevo usuario dentro del grupo sudo.

```sudo adduser name_user sudo```

<img width="468" alt="Screen Shot 2022-11-24 at 5 02 24 AM" src="https://user-images.githubusercontent.com/66915274/203691378-2f2f5309-e650-486e-9cd6-cae4dec2ffa6.png">

Comprobamos que esta dentro del grupo.

 <img width="415" alt="Screen Shot 2022-11-24 at 5 02 39 AM" src="https://user-images.githubusercontent.com/66915274/203691402-6b84f333-10f7-4908-8255-652613afeede.png">

14 ◦ Muestra la aplicación de las reglas impuestas para sudo por el subject.

<img width="503" alt="Screen Shot 2022-11-24 at 5 12 02 AM" src="https://user-images.githubusercontent.com/66915274/203692615-bc1ec51c-ae5f-444f-9577-39b01112c969.png">

<img width="762" alt="Screen Shot 2022-11-24 at 5 12 17 AM" src="https://user-images.githubusercontent.com/66915274/203692638-e6de6cba-ad42-48b9-ac84-21e2b8c50563.png">

15 ◦ Muestra que la ruta /var/log/sudo/ existe y contiene almenos un fichero, en este se debería ver un historial de los comandos utilizados con sudo.

<img width="295" alt="Screen Shot 2022-11-24 at 5 17 54 AM" src="https://user-images.githubusercontent.com/66915274/203693244-39cb5903-7934-4f8a-8c39-f4ad94d305fb.png">

<img width="643" alt="Screen Shot 2022-11-24 at 5 19 07 AM" src="https://user-images.githubusercontent.com/66915274/203693358-b8a2832e-a80d-4304-b3be-43680ab9ba6d.png">

Ejecuta un comando con sudo y comprueba que se actualiza el fichero.

<img width="439" alt="Screen Shot 2022-11-24 at 5 23 08 AM" src="https://user-images.githubusercontent.com/66915274/203693791-21697c05-5087-4494-92ed-56ef9680f9fc.png">

<img width="661" alt="Screen Shot 2022-11-24 at 5 23 21 AM" src="https://user-images.githubusercontent.com/66915274/203693816-be7f7b83-d492-4d01-89cf-abff01d07d96.png">

16 ◦ Comprueba que el programa UFW esta instalado en la maquina virtual y comprueba que funciona correctamente.

```dpkg -s ufw```

<img width="730" alt="Screen Shot 2022-11-24 at 5 24 47 AM" src="https://user-images.githubusercontent.com/66915274/203693974-9e37e6d4-13a1-45b9-bb0d-03960a072694.png">

```sudo service ufw status```

<img width="704" alt="Screen Shot 2022-11-24 at 5 25 49 AM" src="https://user-images.githubusercontent.com/66915274/203694095-3bcf3a2e-04b8-4d63-a55c-b1e952e52dad.png">

17 ◦ Lista las reglas activas en UFW si no esta hecha la parte bonus solo debe aparecer la regla para el puerto 4242.

```sudo ufw status numbered```

<img width="500" alt="Screen Shot 2022-11-24 at 5 27 50 AM" src="https://user-images.githubusercontent.com/66915274/203694334-08b7791e-c7b6-4325-be60-7dc4e0257411.png">

18 ◦ Crea una nueva regla para el puerto 8080. Comprueba que se ha añadido a las reglas activas y acto seguido puedes borrarla.

```sudo ufw allow 8080``` para crearla

<img width="327" alt="Screen Shot 2022-11-24 at 5 31 35 AM" src="https://user-images.githubusercontent.com/66915274/203694718-09ae8097-e636-477d-bdc7-2d45ce892b72.png">

```sudo ufw status numbered```

<img width="473" alt="Screen Shot 2022-11-24 at 5 31 59 AM" src="https://user-images.githubusercontent.com/66915274/203694782-4f70c4a5-0de2-41ea-aba7-b1887e1fd517.png">

Para borrar la regla debemos utilizar el comando ```sudo ufw delete num_rule```

<img width="308" alt="Screen Shot 2022-11-24 at 5 33 15 AM" src="https://user-images.githubusercontent.com/66915274/203694914-82ae09cc-7e96-47db-b5ea-89e496f57db6.png">

Comprobamos que se ha eliminado y vemos el numero de la siguiente regla que hay que borrar.

<img width="467" alt="Screen Shot 2022-11-24 at 5 33 41 AM" src="https://user-images.githubusercontent.com/66915274/203694968-623554d2-f9c6-42db-aa34-c3c627b45f8e.png">

Borramos de nuevo la regla.

<img width="308" alt="Screen Shot 2022-11-24 at 5 34 03 AM" src="https://user-images.githubusercontent.com/66915274/203695003-deccc02f-ffc9-445a-a202-48b57cb66545.png">

Comprobamos que solo nos quedan las reglas requeridas en el subject.

<img width="461" alt="Screen Shot 2022-11-24 at 5 34 11 AM" src="https://user-images.githubusercontent.com/66915274/203695013-6b9ff40b-d23f-4a95-9694-f4e73e17f252.png">

19 ◦ Comprueba que el servicio ssh esta instalado en la maquina virtual, que funciona correctamente y que solo funciona por el puerto 4242.

```which ssh```

<img width="235" alt="Screen Shot 2022-11-24 at 5 37 25 AM" src="https://user-images.githubusercontent.com/66915274/203695373-c1cf2aca-15d5-4e7d-8c13-6e327824ae2c.png">

```sudo service ssh status```

<img width="616" alt="Screen Shot 2022-11-24 at 5 40 34 AM" src="https://user-images.githubusercontent.com/66915274/203695746-b8a3235d-6084-40c6-8cc0-83e78d0b497c.png">

20 ◦ Usa ssh para iniciar sesión con el usuario recién creado. Asegurate de que no puede usar ssh con el usuario root.

Intentamos conectarnos por ssh con el usuario root pero no tenemos permisos.

<img width="1377" alt="Screen Shot 2022-11-24 at 5 44 07 AM" src="https://user-images.githubusercontent.com/66915274/203696165-f1107b33-0c7e-4cce-8d04-56b845637ec8.png">

Nos conectamos por ssh con el nuevo usuario con el comando ```ssh newuser@localhost -p 4242```

<img width="1384" alt="Screen Shot 2022-11-24 at 5 48 06 AM" src="https://user-images.githubusercontent.com/66915274/203696612-f2c98ebf-be55-4830-b5ea-b0ac98de7c65.png">

21 ◦ Modifica el tiempo de ejecución del script de 10 minutos a 1.

Ejecutamos el siguiente comando para asi modificar el fichero crontab ```sudo crontab -u root -e```

<img width="455" alt="Screen Shot 2022-11-24 at 6 30 57 AM" src="https://user-images.githubusercontent.com/66915274/203701854-956c27de-367f-4b54-b21f-8a892d4891d4.png">

Modificamos el primer paramentro , en vez de 10 lo cambiamos a 1.

<img width="638" alt="Screen Shot 2022-11-24 at 6 31 44 AM" src="https://user-images.githubusercontent.com/66915274/203701944-393bd687-8b9c-4643-9d59-4789361e314d.png">

22 ◦ Finalmente haz que el script deje de ejecutarse cuando el servidor se haya iniciado, pero sin modificar el script.

```sudo /etc/init.d/cron stop```

<img width="483" alt="Screen Shot 2022-11-24 at 3 25 53 PM" src="https://user-images.githubusercontent.com/66915274/203807610-d87124f2-47ca-4546-8037-b904e8bcf5d1.png">

Si queremos que vuelva a ejecutarse:

```sudo /etc/init.d/cron start```

<img width="483" alt="Screen Shot 2022-11-24 at 3 27 38 PM" src="https://user-images.githubusercontent.com/66915274/203807970-8fc69a39-6d10-4e64-9be1-eb49c4bf95f8.png">

## 10- Tester 🆗

Comprueba que no te hayas dejado nada! Tester propio para checkear que la instalación y configuración se ha realizado exitosamente.

[AQUÍ](https://github.com/gemartin99/Born2beroot-Tester)

<img width="440" alt="Screen Shot 2023-03-09 at 3 40 54 AM" src="https://user-images.githubusercontent.com/66915274/223902066-f2f6a059-9df8-4e32-a92a-14c43ff8fb0f.png">

# Contacto 📥

### Contacta conmigo si crees que puedo mejorar el tutorial! Puede ayudar a futuros estudiantes! 😁

◦ Email: gemartin@student.42barcelona.com

◦ Linkedin: https://www.linkedin.com/in/gemartin99/

# Quizás pueda interesarte!

### - Para ver mi progresion en el common core 42 ↙️

[AQUÍ](https://github.com/gemartin99/42cursus)

### - Mi perfil en la intranet de 42 ↙️
[AQUÍ](https://profile.intra.42.fr/users/gemartin)
