# Born2beroot-Tutorial 🖥🇵🇹

# Índice

1. [Descarregar imagem da máquina virtual 💿](#1--descarregar-imagem-da-máquina-virtual-)
2. [Instalação da máquina 🛠](#2--instalação-da-máquina-)
3. [Instalação Debian 🌀](#3--instalação-debian-)
4. [Configuração de máquina virtual ⚙️](#4-configuração-de-máquina-virtual-%EF%B8%8F)

	4.1 [Instalação do sudo e configuração dos utilizadores e grupos 👤](#41---instalação-do-sudo-e-configuração-dos-utilizadores-e-grupos-)
	
	4.2 [Instalação e configuração do SSH 📶](#42---instalação-e-configuração-do-ssh-)
	
	4.3 [Instalação e configuração de UFW 🔥🧱](#4-3-instalação-e-configuração-de-ufw-)
	
	4.4 [Configuração de senha forte para o sudo 🔒](#4-4-configuração-de-senha-forte-para-o-sudo-)
	
	4.5 [Configurações de política de senhas fortes 🔑](#4-5-configurações-de-política-de-senhas-fortes-)
	
	4.6 [Conectar via SSH 🗣](#4-6-conectar-via-ssh-)
	
5. [Script 🚨](#5--script-)

	5.1 [Resultado total do script 🆗](#5-13-resultado-total-do-script)
	
6. [Crontab ⏰](#6--crontab-)
7. [Signature.txt 📝](#7--signaturetxt-)
8. [Bonus ⭐](#8--bonus-%EF%B8%8F)

	8.1 [Particionamento manual do disco 🛠](#81--particionamento-manual-do-disco)
	
	8.2 [Wordpress e configuração de serviços 🌐](#82---wordpress-e-configuração-de-serviços-)
	
	8.3 [Servicio adicional ➕](#83---serviço-adicional-)

9. [Guia de correcção ✅](#9--guia-de-correcção-)

	9.1 [Respostas de avaliação 💯](#9-1-respostas-de-avaliação-)
	
	9.2 [Comandos de avaliação ⌨️](#9-2-comandos-de-avaliação-%EF%B8%8F)
10. [Tester 🆗](#10--tester-)
	
## 1- Descarregar imagem da máquina virtual 💿

[Clique aqui](https://www.debian.org/distrib/index.es.html) para o redireccionar para o URL onde pode descarregar a ISO em segurança.

## 2- Instalação da máquina 🛠

Para realizar a instalação, é necessário um software de virtualização. Neste tutorial iremos utilizar [VirtualBox](https://www.virtualbox.org/). Se já tiver o VirtualBox instalado e tiver a ISO Debian, podemos começar com o tutorial.

1 ◦ Abra a VirtualBox e clique em ```Nueva```.

<img width="836" alt="Captura de pantalla 2022-07-13 a las 18 02 05" src="https://user-images.githubusercontent.com/66915274/178779265-38eade6e-2789-4597-89e9-5beca2d3921a.png">

2 ◦ Escolha o nome da sua máquina e a pasta onde ela estará localizada. É importante colocar a máquina dentro da pasta sgoinfre, porque se não a colocarmos lá ficaremos sem espaço e a instalação falhará (dependendo do campus, o caminho sgoinfre pode mudar). 

<img width="694" alt="Screen Shot 2022-11-18 at 2 30 18 PM" src="https://user-images.githubusercontent.com/66915274/202716278-394d5ce7-1f61-4146-a1b5-1e15ed005778.png">


3 ◦ Seleccione a quantidade de RAM a reservar para a máquina.

<img width="685" alt="Captura de pantalla 2022-07-13 a las 13 06 05" src="https://user-images.githubusercontent.com/66915274/178781098-8aa07fbc-e1d2-4bee-8021-ddf052880364.png">

4 ◦ Seleccione agora a segunda opção para criar um disco rígido virtual.

<img width="826" alt="Captura de pantalla 2022-07-13 a las 18 13 24" src="https://user-images.githubusercontent.com/66915274/178781390-289236e0-1732-4dd8-8d3d-34eb0a229a18.png">

5 ◦ Escolhemos a primeira opção ```VDI```, uma vez que descarregámos uma imagem de disco.

<img width="829" alt="Captura de pantalla 2022-07-13 a las 18 16 35" src="https://user-images.githubusercontent.com/66915274/178781999-a42c3c6c-bc1e-4ad5-8bc5-b4b3f811c3f2.png">

6 ◦ Seleccionar a primeira opção ```Reservado dinámicamente``` para que a memória seja reservada na máquina real tal como é utilizada na máquina virtual até ser atingido o limite máximo disponível na máquina virtual.

<img width="833" alt="Captura de pantalla 2022-07-13 a las 18 19 33" src="https://user-images.githubusercontent.com/66915274/178782529-fb309739-3169-4e20-b3e1-23d17a122a18.png">

7 ◦ Depois de definirmos a quantidade recomendada ```12 GB```, devemos clicar em ```Crear```. Se fizermos o bónus seleccionaremos ```30 GB```.

<img width="835" alt="Captura de pantalla 2022-07-13 a las 18 25 20" src="https://user-images.githubusercontent.com/66915274/178783666-4fa624a3-9c38-4c45-b6a8-d476c2864200.png">

8 ◦ Pode parecer que terminámos a instalação, mas ainda há mais alguns passos a dar. Precisamos de clicar na configuração

<img width="831" alt="Captura de pantalla 2022-07-13 a las 18 30 46" src="https://user-images.githubusercontent.com/66915274/178784822-38228e96-ca37-4cc0-b3ca-551829e4c8c8.png">

9 ◦ Depois clique em ```Storage```, clique novamente no emoticon 💿 à direita e novamente clique em ```Select a disk file```.

<img width="962" alt="Captura de pantalla 2022-07-13 a las 18 33 28" src="https://user-images.githubusercontent.com/66915274/178785148-2904cf4f-93c0-4866-a5d6-778390bddeb7.png">

10 ◦ Seleccione a ISO que acabámos de descarregar e clique em ```Abrir``` e depois clique em ```Aceptar```. 

<img width="790" alt="Captura de pantalla 2022-07-13 a las 18 38 39" src="https://user-images.githubusercontent.com/66915274/178786115-24f93fde-bc01-4e60-bf8d-20d7a5ae83be.png">

11. ◦ Uma vez concluídas todas as etapas acima mencionadas, podemos ```Iniciar``` a nossa máquina virtual.

<img width="833" alt="Captura de pantalla 2022-07-13 a las 18 44 55" src="https://user-images.githubusercontent.com/66915274/178787317-aab80b53-8244-4ede-9c75-11fcf4efdd1c.png">

## 3- Instalação Debian 🌀

➤ Espera❗️ A sua visão é muito importante 👀❗️ A fim de aumentar a janela deve fazer o seguinte 

<img width="666" alt="Captura de pantalla 2022-07-13 a las 18 51 41" src="https://user-images.githubusercontent.com/66915274/178788620-61064b58-0c0c-4f48-815e-60b4a8eaecae.png">

Utilize a tecla ```command``` para mover a captura do rato da máquina real para a máquina virtual e vice-versa.

### Vamos continuar com a instalação 🛠

1 ◦ Escolheremos a versão sem interface gráfica ```Install``` como o assunto indica para não utilizar nenhuma. Sempre que quisermos confirmar algo, carregaremos em ```Enter``` e para nos movermos através das opções utilizaremos as setas.

<img width="632" alt="Captura de pantalla 2022-07-13 a las 18 58 48" src="https://user-images.githubusercontent.com/66915274/178789643-e987c6d0-5b6f-4b98-ad4a-5c092a352183.png">

2 ◦ Escolheremos o idioma a utilizar para a instalação e o idioma predefinido que o sistema será definido como ```Inglês```.  

<img width="794" alt="Captura de pantalla 2022-07-13 a las 19 00 41" src="https://user-images.githubusercontent.com/66915274/178789949-4fe83ac8-23b8-4f82-a034-a6d5e81d4f17.png">

3 ◦ Entre no seu país, território ou zona. No meu caso colocarei ```Outro```.

<img width="791" alt="Captura de pantalla 2022-07-13 a las 19 07 50" src="https://user-images.githubusercontent.com/66915274/178791067-44230a4c-e647-46cb-9d6f-bc441bf0227b.png">

4 ◦ Como seleccionei outros, tenho de indicar o meu continente ou região. No meu caso coloquei ```Europa``` 🇪🇺. 

<img width="797" alt="Captura de pantalla 2022-07-13 a las 19 09 58" src="https://user-images.githubusercontent.com/66915274/178791387-78171f90-2834-42ab-aedb-9cf900d0ecd5.png">

5 ◦ Seleccionamos o país. No meu caso ```Espanha``` 🇪🇸.

<img width="793" alt="Captura de pantalla 2022-07-13 a las 19 12 01" src="https://user-images.githubusercontent.com/66915274/178791824-7a34813c-eae9-4b5c-9873-cea158229e07.png">

6 ◦ Seleccione ```United States```.

<img width="792" alt="Captura de pantalla 2022-07-13 a las 19 13 43" src="https://user-images.githubusercontent.com/66915274/178792054-4e72dfdd-8175-48f9-a06d-f2696fa752e3.png">

7 ◦ É importante seleccionar ```American English``` como a configuração do teclado, caso contrário, terá as teclas erradas a prender.

<img width="793" alt="Captura de pantalla 2022-07-13 a las 19 02 21" src="https://user-images.githubusercontent.com/66915274/178790230-d2571d4f-a546-4b43-bd44-c6a591d92d72.png">

8 ◦ Neste passo devemos escolher o ```Host Name``` da máquina, que deve ser o seu login seguido de 42. 

<img width="792" alt="Captura de pantalla 2022-07-13 a las 19 17 23" src="https://user-images.githubusercontent.com/66915274/178792607-1cc585eb-ae32-4b2c-97fd-4fcf5bad4262.png">

9 ◦ Deixaremos esta secção vazia, pois o assunto não menciona nada sobre ```Domain Name```.

<img width="792" alt="Captura de pantalla 2022-07-13 a las 19 20 29" src="https://user-images.githubusercontent.com/66915274/178793113-b0934aac-fac4-4844-8412-aca124038fd0.png">

10 ◦ Temos de introduzir uma palavra-passe para a conta de administração do sistema. É importante escrevê-la ou tirar uma fotografia da mesma, pois iremos utilizá-la. Se quiser ver a palavra-passe para se certificar de que a digitou correctamente, introduza na tabulação a opção ```Show Password in Clear``` deve carregar na barra de espaço e a chave será afixada.

<img width="760" alt="Screen Shot 2022-11-18 at 2 32 55 PM" src="https://user-images.githubusercontent.com/66915274/202716754-cf30a8b0-0f3b-4aca-803e-57416a1667fa.png">

11 ◦ Repetimos o processo novamente para verificar que não o escrevemos mal.

<img width="751" alt="Screen Shot 2022-11-18 at 2 33 15 PM" src="https://user-images.githubusercontent.com/66915274/202716814-df6aa34a-e118-47cd-ac7e-ff7d35a3ef90.png">

12 ◦ Escolhemos o nome do nosso novo utilizador. Como o assunto indica que temos de criar um utilizador adicional que não seja root com o nosso login, por este motivo chamarei ao meu novo utilizador ```gemartin```.

<img width="794" alt="Captura de pantalla 2022-07-13 a las 19 26 20" src="https://user-images.githubusercontent.com/66915274/178794178-901f7951-a978-458d-a925-4586026784f7.png">

Voltamos a colocar o nome do utilizador.

![image](https://user-images.githubusercontent.com/66915274/182679675-4d3805a9-34c9-4ba3-9488-1a7fe30f2519.png)


13 ◦ Agora temos de introduzir a palavra-passe do nosso novo utilizador. Tal como a anterior, repetiremos o processo para verificar que não a digitou mal e é também importante que a guarde porque a utilizaremos mais tarde.

<img width="790" alt="Captura de pantalla 2022-07-13 a las 19 30 08" src="https://user-images.githubusercontent.com/66915274/178794862-94de8c7a-282e-4a83-9903-d3b8439122ea.png">

14 ◦ Seleccionamos a hora da nossa localização.

<img width="796" alt="Captura de pantalla 2022-07-13 a las 19 31 41" src="https://user-images.githubusercontent.com/66915274/178795105-956854e1-deff-4851-8eba-26cdefb1e06f.png">

15 ◦ Vamos escolher a terceira opção ```Guied - use entire disk and set up encrypted LVM``` uma vez que o subject nos diz que devem ser divisórias encriptadas. ⚠️❗️ Se quiser fazer o bónus, deve clicar em ```Manual``` e [clique aqui](#8--bonus-%EF%B8%8F) ❗️⚠️

<img width="796" alt="Captura de pantalla 2022-07-13 a las 19 33 13" src="https://user-images.githubusercontent.com/66915274/178795367-b82018de-edc8-47d3-8cd6-b90c5e3be2fa.png">


16 ◦ Seleccione o disco em que pretende particionar (deve haver apenas um disco). 

<img width="789" alt="Captura de pantalla 2022-07-13 a las 19 40 03" src="https://user-images.githubusercontent.com/66915274/178796481-29ef7ebc-0518-40f0-9429-3f43316b35d3.png">

17 ◦ Uma vez escolhido o disco, devemos parti-lo conforme solicitado. Para o fazermos correctamente, temos de seleccionar a segunda opção ```Separate /home partition```.

<img width="787" alt="Screen Shot 2023-03-08 at 1 44 16 PM" src="https://user-images.githubusercontent.com/66915274/223716446-9ffb6f66-1ad3-4bfe-81ce-1f297bed0ede.png">

18 ◦ Vamos escolher a opção ```Yes``` para que as alterações sejam escritas em disco e o gestor de volume lógico (LVM) possa ser configurado.

<img width="777" alt="Captura de pantalla 2022-07-13 a las 19 44 30" src="https://user-images.githubusercontent.com/66915274/178797258-8c34bc31-16a7-4aef-8406-cecc21fdf028.png">

19 ◦ Clicamos em Cancel, pois não é necessário apagar os dados no disco.

<img width="782" alt="Captura de pantalla 2022-07-13 a las 19 46 45" src="https://user-images.githubusercontent.com/66915274/178797666-78cdf892-1a83-4c68-8f85-0d5440cd4854.png">

20 ◦ Mais uma vez teremos de definir uma palavra-passe, desta vez será a frase de encriptação. Como mencionei anteriormente, terá de repetir o processo e deverá escrevê-la, pois será importante no futuro.

<img width="777" alt="Captura de pantalla 2022-07-13 a las 19 51 17" src="https://user-images.githubusercontent.com/66915274/178798491-4c9b4a0c-d698-47c7-9579-10b16aa47275.png">

21 ◦ En este paso debemos introducir la cantidad de volumen que usaremos para la partición guiada. Debemos introducir ```max``` o el numero de tamaño maximo disponible en mi caso es ```12.4 GB```.

<img width="794" alt="Captura de pantalla 2022-07-13 a las 19 55 02" src="https://user-images.githubusercontent.com/66915274/178799165-c6b05fd2-86ad-45b7-a026-9ee169eda5d5.png">

22 ◦ Para finalizar a partição e escrever as alterações no disco, clicaremos na opção ```Finish partitioning and write changes to disk```.

<img width="789" alt="Screen Shot 2023-03-08 at 1 46 17 PM" src="https://user-images.githubusercontent.com/66915274/223716909-c20cea01-950f-49cd-9ce6-99ec0eab0ea4.png">

23 ◦ Seleccione a opção ```Yes``` para continuar e confirmar que não queremos fazer mais nenhuma alteração ao disco.

<img width="770" alt="Screen Shot 2023-03-08 at 1 46 52 PM" src="https://user-images.githubusercontent.com/66915274/223716940-b2e29ee7-3c98-434e-bccd-ac21d72eda2d.png">

24 ◦ Escolhemos a opção ```No``` porque não precisamos de quaisquer pacotes adicionais. 

<img width="770" alt="Captura de pantalla 2022-07-13 a las 20 05 42" src="https://user-images.githubusercontent.com/66915274/178801099-2dda24f5-0d46-4184-8c44-a8fe0bf46527.png">

25 ◦ Escolhemos o nosso país.

<img width="756" alt="Captura de pantalla 2022-07-13 a las 20 14 23" src="https://user-images.githubusercontent.com/66915274/178802653-d9e8504a-b60b-4441-8ee3-8d48ca4a6bf0.png">

26 ◦ Escolhemos ```deb.debian.org``` pois é isto que a debian recomenda.

<img width="792" alt="Captura de pantalla 2022-07-13 a las 20 15 00" src="https://user-images.githubusercontent.com/66915274/178802772-4f67cd99-60d5-4439-8502-317e81e07d70.png">

27 ◦ Deixe esta opção vazia e clique em ```Continue```.

<img width="797" alt="Captura de pantalla 2022-07-13 a las 20 17 24" src="https://user-images.githubusercontent.com/66915274/178803208-2969acae-3fa7-423e-8a3c-bb7c76eff824.png">

28 ◦ Escolhemos a opção ```No``` porque não queremos que os criadores vejam as nossas estatísticas, mesmo que estas sejam anónimas.

<img width="796" alt="Captura de pantalla 2022-07-13 a las 20 21 54" src="https://user-images.githubusercontent.com/66915274/178803926-a4efbc70-f3e2-4e6c-9809-9152478d8237.png">

29 ◦ Remover todas as opções de software (com a barra de espaço) e clicar em ```Continue```.

<img width="797" alt="Captura de pantalla 2022-07-13 a las 20 24 17" src="https://user-images.githubusercontent.com/66915274/178804377-e775b89e-93d4-482f-a4d0-0ef126f47719.png">

30 ◦ Vamos seleccionar ```Yes``` para instalar [GRUB boot](https://es.wikipedia.org/wiki/GNU_GRUB) no disco rígido

<img width="792" alt="Captura de pantalla 2022-07-13 a las 20 26 24" src="https://user-images.githubusercontent.com/66915274/178804771-ba16e0b7-9f06-4c5b-9451-0bfd65efd2bb.png">

31 ◦ Escolha o dispositivo para a instalação do bootloader ```/dev/sda (ata_VBOX_HARDDISK)```.

<img width="792" alt="Captura de pantalla 2022-07-13 a las 20 35 46" src="https://user-images.githubusercontent.com/66915274/178806441-f1bf3159-4e09-4c9a-9102-b3261c9000d8.png">

32 ◦ Vamos dar ```Continue``` para terminar a instalação. 

<img width="794" alt="Captura de pantalla 2022-07-13 a las 20 39 30" src="https://user-images.githubusercontent.com/66915274/178807102-e2a9722e-791f-48a0-ae35-b05b36a37ed2.png">

## 4 Configuração de máquina virtual ⚙️

➤ A primeira coisa a fazer é seleccionar ```Debian GNU/Linux```.

➤ Temos de introduzir a palavra-passe de encriptação que utilizámos anteriormente. No meu caso, é ```Hello42bcn```.

<img width="714" alt="Captura de pantalla 2022-07-13 a las 20 47 26" src="https://user-images.githubusercontent.com/66915274/178808699-f1024129-5f90-41d0-a9a8-4806f5bc114b.png">

➤ Temos de introduzir o utilizador e a palavra-passe que criámos. No meu caso, o utilizador é ```gemartin``` e a palavra-chave ```Hola42spain```.

<img width="798" alt="Captura de pantalla 2022-07-13 a las 20 48 38" src="https://user-images.githubusercontent.com/66915274/178808994-664025ac-36df-4332-8e44-505ecd2ca305.png">

### Agora temos tudo pronto para começar a configurar a nossa máquina virtual Debian❗️

### 4.1 - Instalação do sudo e configuração dos utilizadores e grupos 👤

1 ◦ Para instalar o sudo primeiro temos de estar no utilizador raiz, para isso vamos colocar ```Su``` no terminal e introduzir a palavra-passe, no meu caso é ```Hola42bcn```. Uma vez que tenhamos acedido ao utilizador root, devemos colocar o comando ```apt install sudo``` para instalar os pacotes necessários.

<img width="796" alt="Captura de pantalla 2022-07-14 a las 1 36 46" src="https://user-images.githubusercontent.com/66915274/178855273-fc76689c-224b-4368-b7b1-5d1954427aff.png">

2 ◦ Precisamos de reiniciar a máquina para que as alterações produzam efeito. Para tal, utilizar o comando ```sudo reboot``` e esperar que a máquina reinicie. 

<img width="514" alt="Captura de pantalla 2022-07-14 a las 2 02 24" src="https://user-images.githubusercontent.com/66915274/178857108-a51988e1-084c-498c-86c6-98ab5a3b1305.png">

3 ◦ Uma vez reiniciada, devemos reintroduzir a encriptação e as palavras-passe dos utilizadores. Para verificar se instalámos correctamente o ```sudo```, voltaremos a entrar no utilizador root e introduziremos o comando ```sudo -V```, este comando para além de nos mostrar a versão do sudo também nos mostrará os argumentos passados para configurar quando o sudo foi criado e os plugins que podem mostrar informações mais detalhadas. (Opcional) ➤ Uma vez que a saída do comando é muito longa, se o quisermos ver completamente, devemos redireccionar a saída do comando para um ficheiro ```sudo -V > file.txt``` e depois editar o ficheiro ```nano file.txt```. Ou colocar ```| more``` após o comando.

<img width="799" alt="Captura de pantalla 2022-07-14 a las 2 09 59" src="https://user-images.githubusercontent.com/66915274/178857742-96356272-abd6-44c4-a3e6-5e8b9f471146.png">

4 ◦ Continuando no utilizador root criaremos um utilizador com o nosso login com o comando ```sudo adduser login```, pois já criámos o utilizador na instalação, devemos ver que o utilizador já existe.

<img width="509" alt="Captura de pantalla 2022-07-14 a las 2 15 11" src="https://user-images.githubusercontent.com/66915274/178858240-95ce2a2b-004a-4bcb-981a-7990c1cc4fdd.png">

5 ◦ Agora precisamos de criar um novo grupo chamado ```user42```. Para o criar, faça ```sudo addgroup user42```. 

<img width="367" alt="Screen Shot 2022-10-26 at 6 30 52 PM" src="https://user-images.githubusercontent.com/66915274/198082677-d393243e-363a-4d1f-95d8-a6695336a47a.png">

🧠 <b>O que é GID❓</b> É o Identificador do Grupo, abreviatura de Group Identifier 🆔.

🤔 <b> O grupo foi criado correctamente? </b> A verdade é que se não tiver havido qualquer mensagem de erro, ainda podemos verificar se foi criada com o comando ```getent group nombre_grupo``` ou também podemos fazer  ```cat /etc/group``` e podemos ver todos os grupos e os utilizadores dentro deles.

6 ◦ Com o comando ```sudo adduser group```, iremos incluir o utilizador no grupo. Devemos incluir o utilizador nos grupos ```sudo``` e ```user42```.

<img width="422" alt="Screen Shot 2022-10-26 at 6 32 30 PM" src="https://user-images.githubusercontent.com/66915274/198083019-c5a442bb-c625-45ce-84e1-bcbca3a7dba5.png">

<img width="404" alt="Screen Shot 2022-10-26 at 6 34 09 PM" src="https://user-images.githubusercontent.com/66915274/198083377-bd4162c6-317b-474f-8bc4-e542be4dcfde.png">

7 ◦ Depois de os termos introduzido para verificar se tudo foi feito correctamente, podemos executar o comando ```getent group group_name``` ou podemos também editar o ficheiro /etc/group ```nano /etc/group``` e nos grupos ```sudo``` e ```login42``` o nosso utilizador deve aparecer.

<img width="328" alt="Screen Shot 2022-10-26 at 6 35 50 PM" src="https://user-images.githubusercontent.com/66915274/198083739-ad16e388-69c3-41d1-a061-e55dd66b0d14.png">

<img width="151" alt="Screen Shot 2022-10-26 at 6 36 18 PM" src="https://user-images.githubusercontent.com/66915274/198083854-0fba5296-a49f-44cc-8427-59a692e69288.png">

<img width="353" alt="Screen Shot 2022-10-26 at 6 39 22 PM" src="https://user-images.githubusercontent.com/66915274/198084464-f73352ee-ed21-478b-a44d-d86eb6d8a1cd.png">

<img width="183" alt="Screen Shot 2022-10-26 at 6 38 25 PM" src="https://user-images.githubusercontent.com/66915274/198084311-45a50162-ff89-4e7d-a3c5-45e7048520a4.png">

### 4.2 - Instalação e configuração do SSH 📶

🧠 <b>O que é SSH❓</b> É o nome de um protocolo e do programa que o implementa, cuja função principal é o acesso remoto a um servidor através de um canal seguro no qual toda a informação é encriptada.

1 ◦ A primeira coisa que faremos é ```sudo apt update``` para actualizar os repositórios por nós definidos no ficheiro /etc/apt/sources.list

<img width="774" alt="Captura de pantalla 2022-07-14 a las 3 09 44" src="https://user-images.githubusercontent.com/66915274/178864173-aa5a08cf-8562-4484-a60a-3e1c7a533a28.png">

2 ◦ A seguir instalaremos a principal ferramenta de conectividade para o login remoto com o protocolo SSH, esta ferramenta é OpenSSH. Para a instalar, introduza o comando ```sudo apt install openssh-server```. Na mensagem de confirmação coloque ```Y```, depois aguarde que a instalação termine.

<img width="772" alt="Captura de pantalla 2022-07-14 a las 3 14 52" src="https://user-images.githubusercontent.com/66915274/178865991-cdb90f12-ebd8-4583-bcbb-70f47c86abe6.png">

Para verificar se foi instalado correctamente, faremos o ```sudo service ssh status``` e este deve mostrar-se activo.

<img width="702" alt="Captura de pantalla 2022-07-14 a las 3 53 59" src="https://user-images.githubusercontent.com/66915274/178876938-7fd74214-15df-4759-bf8d-52b53a8f4251.png">

3 ◦ Uma vez terminada a instalação, foram criados alguns ficheiros que temos de configurar. Para tal, utilizaremos [Nano](https://es.wikipedia.org/wiki/GNU_Nano) ou se preferir outro editor de texto. O primeiro ficheiro a editar é ```/etc/ssh/sshd_config```. Se não estiver no utilizador root não terá permissões de escrita, para isso faremos ```su``` e colocaremos a palavra-passe para introduzir o utilizador root ou se não quiser introduzir o utilizador root colocar sudo no início do comando ```sudo nano /etc/ssh/sshd_config```.

<img width="497" alt="Captura de pantalla 2022-07-14 a las 3 24 21" src="https://user-images.githubusercontent.com/66915274/178867150-273c75c1-c935-45f0-a551-1a115d3f6f6a.png">

4 ◦ O ```#``` no início de uma linha significa que é comentado, as linhas que vamos modificar devem remover o comentário. Uma vez editado o ficheiro, devemos modificar as seguintes linhas:

➤ #Port 22 -> Port 4242

<img width="807" alt="Captura de pantalla 2022-07-14 a las 3 31 04" src="https://user-images.githubusercontent.com/66915274/178867929-0f8be11e-d0ca-4445-af05-a693d01411bd.png">

➤ #PermitRootLogin prohibit-password -> PermitRootLogin no

<img width="798" alt="Captura de pantalla 2022-07-14 a las 3 34 13" src="https://user-images.githubusercontent.com/66915274/178868266-fc6d6684-8196-4021-b884-a047a443a3ec.png">

Uma vez modificadas estas linhas, devemos guardar as alterações feitas no ficheiro e parar de o editar.

5 ◦ Temos agora de editar o ficheiro ```/etc/ssh/ssh_config```.

<img width="501" alt="Captura de pantalla 2022-07-14 a las 3 48 56" src="https://user-images.githubusercontent.com/66915274/178872582-8277e687-8ab7-4087-bd17-a71e5e86d5e6.png">

Iremos editar a seguinte linha:

➤ #Port 22 -> Port 4242

<img width="795" alt="Captura de pantalla 2022-07-14 a las 3 50 29" src="https://user-images.githubusercontent.com/66915274/178875013-1969c13f-9e43-4f2a-a037-f384a8e87a78.png">

6 ◦ Finalmente, temos de reiniciar o serviço ssh para actualizar as modificações que acabámos de fazer. Para o fazer, devemos digitar o comando ```sudo service ssh restart``` e, uma vez reiniciado, vamos olhar para o estado actual com ```sudo service ssh status``` e para confirmar que as alterações foram feitas no ouvinte do servidor, a porta 4242 deve aparecer.

<img width="713" alt="Captura de pantalla 2022-07-14 a las 3 56 56" src="https://user-images.githubusercontent.com/66915274/178880333-0e2ad7fd-674b-4b4f-b92a-25acbc36c8a5.png">


### 4-3 Instalação e configuração de UFW 🔥🧱

🧠 <b>O que é [UFW](https://es.wikipedia.org/wiki/Uncomplicated_Firewall)❓</b> É um [firewall].(https://es.wikipedia.org/wiki/Cortafuegos_(inform%C3%A1tica)) que utiliza a linha de comando para configurar [iptables](https://es.wikipedia.org/wiki/Iptables) utilizando um pequeno número de comandos simples.

1 ◦ A primeira coisa a fazer é instalar o UFW, para o fazer utilizaremos o comando ```sudo apt install ufw```, depois escreveremos um ```y``` para confirmar que o queremos instalar e esperar que termine.

<img width="771" alt="Captura de pantalla 2022-07-14 a las 19 28 55" src="https://user-images.githubusercontent.com/66915274/179045920-4a9aec64-b1d7-4785-89a1-4a299aae21a3.png">

<img width="802" alt="Captura de pantalla 2022-07-14 a las 19 29 25" src="https://user-images.githubusercontent.com/66915274/179045994-19cdf6e0-be61-454b-9adc-ba1f9c2dfd84.png">

2 ◦ Uma vez instalada, devemos activá-la, para o fazer devemos colocar o seguinte comando ```sudo ufw enable``` e depois devemos indicar que a firewall está activa.

<img width="498" alt="Captura de pantalla 2022-07-14 a las 19 32 57" src="https://user-images.githubusercontent.com/66915274/179046565-307c042b-243e-4224-bcb2-d02859332352.png">

3 ◦ Agora o que precisamos de fazer é permitir que a nossa firewall permita ligações através da porta 4242. Fá-lo-emos com o seguinte comando ```sudo ufw allow 4242```.

<img width="514" alt="Captura de pantalla 2022-07-14 a las 19 34 12" src="https://user-images.githubusercontent.com/66915274/179046765-5277ec55-b8e4-4d4f-a617-a2a8758b80a8.png">

4 ◦ Finalmente, verificaremos se tudo está correctamente configurado, olhando para o estado da nossa firewall, onde as ligações através da porta 4242 já devem aparecer como permitidas. Para ver o estado, utilizaremos o comando ```sudo ufw status```.

<img width="575" alt="Captura de pantalla 2022-07-14 a las 19 38 37" src="https://user-images.githubusercontent.com/66915274/179047574-8073045c-6e78-4b6f-8487-cb0f490a2cd0.png">

### 4-4 Configuração de senha forte para o sudo 🔒

1 ◦ Vamos criar um ficheiro no caminho /etc/sudoers.d/. Decidi chamar o meu ficheiro sudo_config, pois é aqui que a configuração da senha será armazenada. O comando exacto para criar o ficheiro é ```touch /etc/sudoers.d/sudo_config```.

<img width="511" alt="Captura de pantalla 2022-07-14 a las 22 00 40" src="https://user-images.githubusercontent.com/66915274/179072822-2f86bd8b-216e-45e4-a15b-8fe3a49149ff.png">

2 ◦ Devemos criar o directório sudo no caminho /var/log porque cada comando que executamos com o sudo, tanto a entrada como a saída devem ser armazenadas nesse directório. Para o criar utilizaremos o comando ```mkdir /var/log/sudo```.

<img width="502" alt="Captura de pantalla 2022-07-14 a las 21 56 53" src="https://user-images.githubusercontent.com/66915274/179072210-ad99e50d-fa57-494b-999d-3a80dd0f7849.png">

3 ◦ Devemos editar o ficheiro criado no passo 1. Como disse antes, pode usar qualquer editor que quiser, mas eu usarei nano. Comando para editar o ficheiro: ```nano /etc/sudoers.d/sudo_config```.

<img width="502" alt="Captura de pantalla 2022-07-14 a las 22 04 10" src="https://user-images.githubusercontent.com/66915274/179073389-5b2a9c16-811c-4133-87c6-479e770c880b.png">

4 ◦ Uma vez editado o ficheiro, deve introduzir os seguintes comandos para cumprir todos os requisitos do subject.

```
Defaults  passwd_tries=3
Defaults  badpass_message="Mensaje de error personalizado"
Defaults  logfile="/var/log/sudo/sudo_config"
Defaults  log_input, log_output
Defaults  iolog_dir="/var/log/sudo"
Defaults  requiretty
Defaults  secure_path="/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin:/snap/bin"
```

➤ Como deve ser o ficheiro.

<img width="1202" alt="Captura de pantalla 2022-07-16 a las 2 03 45" src="https://user-images.githubusercontent.com/66915274/179326003-1fd67295-4be2-47bd-98fc-d5821f5f1c4d.png">

🤔 <b>O que cada comando does❓ </b>

<img width="802" alt="Captura de pantalla 2022-07-16 a las 2 04 56" src="https://user-images.githubusercontent.com/66915274/179326915-b374f679-fa2e-4e02-8b38-cdb53c6354a6.png">

### 4-5 Configurações de política de senhas fortes 🔑

1 ◦ O primeiro passo é a edição do ficheiro login.defs.

<img width="493" alt="Captura de pantalla 2022-07-16 a las 2 54 06" src="https://user-images.githubusercontent.com/66915274/179327943-67432d4a-7042-44ea-96f4-5975556ce4dc.png">

2 ◦ Uma vez que estamos a editar o ficheiro, modificaremos os seguintes parâmetros:

➤ PASS_MAX_DAYS 99999 -> PASS_MAX_DAYS 30

➤ PASS_MIN_DAYS 0 -> PASS_MIN_DAYS 2


<img width="802" alt="Captura de pantalla 2022-07-16 a las 3 05 49" src="https://user-images.githubusercontent.com/66915274/179328449-32a40f67-a18d-4f29-993b-94d013cd7670.png">

PASS_MAX_DAYS: Este é o tempo de expiração da palavra-passe. O número corresponde a dias.

PASS_MIN_DAYS: O número mínimo de dias permitido antes de alterar uma palavra-passe.

PASS_WARN_AGE: O utilizador receberá uma mensagem de aviso indicando que o número de dias especificado permanece até a sua senha expirar.

3 ◦ Para continuar com a configuração temos de instalar os seguintes pacotes com este comando ```sudo apt install libpam-pwquality```, depois colocar ```Y``` para confirmar a instalação e esperar que termine. 

<img width="770" alt="Captura de pantalla 2022-07-16 a las 3 13 52" src="https://user-images.githubusercontent.com/66915274/179328708-c5054703-bdb0-4cca-82a8-6ab25ce42b40.png">

4 ◦ A próxima coisa a fazer é voltar atrás e editar um ficheiro e modificar algumas linhas. Faremos ```nano /etc/pam.d/com palavras-passe comuns```. 

<img width="500" alt="Captura de pantalla 2022-07-16 a las 3 27 02" src="https://user-images.githubusercontent.com/66915274/179329260-0e18bd27-a522-4c7c-86bf-21823eee0f8b.png">

5 ◦ Após nova tentativa=3, devemos acrescentar os seguintes comandos:

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
➤ É assim que a linha deve ser ↙️

<img width="1047" alt="Screen Shot 2023-01-03 at 7 41 57 PM" src="https://user-images.githubusercontent.com/66915274/210420896-8274b75b-86e4-4fba-9a14-ca838b61c2e6.png">

➤ Esta é a aparência que deve ter no ficheiro ↙️

<img width="800" alt="Captura de pantalla 2022-07-16 a las 3 38 08" src="https://user-images.githubusercontent.com/66915274/179329787-1b718843-9272-43e4-8d92-8d83933cc938.png">

🤔 <b>O que cada comando does❓</b>

minlen=10 ➤ O número mínimo de caracteres que a senha deve conter.

ucredit=-1 ➤ Deve conter pelo menos uma letra maiúscula. Colocamos o - como deve conter pelo menos um caracter, se colocarmos + queremos dizer no máximo esses caracteres.

dcredit=-1 ➤ Deve conter pelo menos um dígito.

lcredit=-1 ➤ Deve conter pelo menos uma letra minúscula.

maxrepeat=3 ➤ Não se pode ter o mesmo carácter mais de 3 vezes seguidas.

reject_username ➤ Não pode conter o nome do utilizador.

difok=7 ➤  Deve ter pelo menos 7 caracteres que não façam parte da senha antiga. 

enforce_for_root ➤ Iremos implementar esta política para o utilizador de raiz.

### 4-6 Conectar via SSH 🗣

1 ◦ Para ligar via SSH temos de fechar a máquina, abrir a VirtualBox e clicar na configuração.

<img width="832" alt="Captura de pantalla 2022-07-18 a las 10 15 13" src="https://user-images.githubusercontent.com/66915274/179470948-d9a863ef-f1a3-41fb-a103-25378064e747.png">

2 ◦ Uma vez na configuração devemos clicar na secção ```Red``` , clicar em```Avanzadas``` para nos mostrar mais opções e clicar em```Reenvío de puertos```.

<img width="684" alt="Captura de pantalla 2022-07-18 a las 10 18 32" src="https://user-images.githubusercontent.com/66915274/179471690-cfbdbf4b-ab93-4b12-9504-2482712652a3.png">

3 ◦ Clique no seguinte emoticon para adicionar uma regra de reencaminhamento.

<img width="585" alt="Captura de pantalla 2022-07-18 a las 10 21 24" src="https://user-images.githubusercontent.com/66915274/179471855-913a684d-c7b0-43e2-9e01-d2c954fe75a4.png">

4 ◦ Finalmente, acrescentaremos o porto ```4242``` ao anfitrião e convidado. Os IP's não são necessários. Clique no botão de aceitação para aplicar as alterações.

<img width="588" alt="Captura de pantalla 2022-07-18 a las 10 22 29" src="https://user-images.githubusercontent.com/66915274/179472105-5942b3ec-5c29-4d49-a00e-67f9cde289e8.png">

➤ Para nos podermos ligar à máquina virtual a partir da máquina real, temos de abrir um terminal na máquina real e escrever ```ssh gemartin@localhost -p 4242```, pedir-nos-á a palavra-passe do utilizador e assim que a introduzirmos veremos o login a verde e isso significa que estaremos ligados.

<img width="517" alt="Screen Shot 2022-10-27 at 12 40 23 AM" src="https://user-images.githubusercontent.com/66915274/198174777-28f7793b-273b-43ce-b1c2-4a890353cb8c.png">

<img width="566" alt="Screen Shot 2022-10-27 at 12 40 04 AM" src="https://user-images.githubusercontent.com/66915274/198174814-c1873c62-41dd-4c1d-ad2d-f268b2da0e4c.png">

## 5- Script 🚨

Esta é uma parte muito importante do projecto. Deve-se prestar atenção a tudo, muito importante não copiar e colar directamente o ficheiro sem saber o que faz o quê. Na avaliação, deve explicar cada comando se o avaliador o pedir.

🧠 <b>O que é um script❓</b> É uma sequência de comandos armazenados num ficheiro que, quando executado, fará a função de cada comando.

### 5-1 Arquitectura 

Para ver a arquitectura do SO e a sua versão do kernel utilizaremos o comando ```uname -a``` ("-a" == "--all" ) que basicamente imprimirá toda a informação excepto se o tipo de processador for desconhecido ou a plataforma de hardware. 

<img width="715" alt="Screen Shot 2022-10-27 at 4 50 06 PM" src="https://user-images.githubusercontent.com/66915274/198322524-8c2d305f-bfe8-4e4a-bf31-6a883af71ad3.png">

### 5-2 Núcleos físicos

Para exibir o número de núcleos físicos, faremos uso do ficheiro /proc/cpuinfo que fornece informações sobre o processador: o seu tipo, marca, modelo, desempenho, etc. Utilizaremos o comando ```grep "physical id" /proc/cpuinfo | wc -l``` com o comando grep procuraremos dentro do ficheiro "physical id" e com wc -l contaremos as linhas do resultado do grep. Fazemo-lo porque a forma de quantificar os núcleos não é muito comum. Se houver um processador, marcará 0 e se houver mais do que um processador, mostrará toda a informação do processador separadamente contando os processadores usando notação zero. Desta forma, contamos simplesmente o número de linhas, pois é mais conveniente quantificá-lo desta forma.

<img width="596" alt="Screen Shot 2022-10-27 at 4 50 49 PM" src="https://user-images.githubusercontent.com/66915274/198322799-4bf2131e-7fba-4c9e-8d1b-bb9cc1b89e76.png">


### 5-3 Núcleos virtuais

Mostrar o número de núcleos virtuais é muito semelhante ao anterior. Utilizaremos novamente o ficheiro /proc/cpuinfo, mas, neste caso, utilizaremos o comando ```grep processor /proc/cpuinfo | wc -l```. A utilização é praticamente a mesma que a anterior, excepto que em vez de contarmos as linhas físicas de id, iremos contar as linhas do processador. Fazemo-lo desta forma pela mesma razão que anteriormente, a forma de quantificar marcas 0 se houver um processador.

<img width="586" alt="Screen Shot 2022-10-27 at 4 55 48 PM" src="https://user-images.githubusercontent.com/66915274/198324254-3d0f247d-b767-4e02-9e69-11b4e0586280.png">


### 5-4 Memória RAM

Para exibir a memória do carneiro utilizaremos o comando ```free``` para ver num relance informações sobre o carneiro, a peça usada, gratuita, reservada para outros recursos, etc. Para mais informações sobre o comando utilizaremos gratuitamente --help. Utilizaremos gratuitamente --mega porque no assunto existe essa unidade de medida (Megabyte). É importante usar --mega e não -m. Com -m referir-nos-emos à unidade de medida Mebibyte e esta não é a especificada no assunto.

<img width="672" alt="Captura de pantalla 2022-08-02 a las 2 46 10" src="https://user-images.githubusercontent.com/66915274/182268241-86b743bb-653d-4fef-acda-e7bfa59e38d7.png">

Uma vez executado este comando, devemos filtrar a nossa pesquisa uma vez que não precisamos de toda a informação que nos dá, a primeira coisa que devemos mostrar é a memória utilizada, para isso utilizaremos o comando ```awk```, o que este comando faz é processar dados com base em ficheiros de texto, ou seja, podemos utilizar os dados que nos interessam no ficheiro X. Finalmente o que faremos é comparar se a primeira palavra de uma linha for igual a "Mem:" imprimiremos a terceira palavra dessa linha que será a memória utilizada. O comando completo em conjunto seria ```free --mega | awk '$1 == "Mem:" {print $3}'```. No script, o valor de retorno deste comando será atribuído a uma variável que será concatenada com outras variáveis, para que tudo se mantenha igual ao especificado no assunto.

<img width="621" alt="Captura de pantalla 2022-08-02 a las 2 55 21" src="https://user-images.githubusercontent.com/66915274/182269019-d5bb3107-f091-491f-a4ab-27edd357aec8.png">

Para obter a memória total, o comando é praticamente o mesmo que o anterior, a única alteração é que em vez de imprimir a terceira palavra da linha, queremos a segunda palavra ```free --mega | awk '$1 == "Mem:" {print $2}'```.

<img width="605" alt="Captura de pantalla 2022-08-02 a las 3 00 02" src="https://user-images.githubusercontent.com/66915274/182269450-318816e1-fc71-48b0-a860-278cc6050e05.png">

Por último, precisamos de calcular a % de memória utilizada. O comando é novamente semelhante aos anteriores, a única modificação que faremos está na parte da impressão. Como a operação para obter a percentagem não é exacta, pode dar-nos muitas casas decimais e no assunto apenas 2 são mostradas, pelo que faremos o mesmo, por isso utilizamos ```%.2f``` para que apenas 2 casas decimais sejam mostradas. Outra coisa que talvez não saiba é que na impressão para mostrar um ```%``` tem de colocar ```%%```. O comando completo ```free --mega | awk '$1 == "Mem:" {printf("(%.2f%%%%)\n", $3/$2*100)}'```.

<img width="798" alt="Captura de pantalla 2022-08-02 a las 3 51 01" src="https://user-images.githubusercontent.com/66915274/182274627-195476b2-1e17-4a4c-8d5c-2056e4e2bbb6.png">

### 5-5 Memória em disco

A fim de ver a memória de disco ocupada e disponível, utilizaremos o comando ```df``` que significa "sistema de ficheiros de disco", que é utilizado para obter uma visão completa da utilização do espaço em disco. Como o assunto indica que a memória utilizada é mostrada em MB, utilizaremos a bandeira -m. Em seguida, iremos grep para mostrar apenas linhas contendo "/dev/" e depois grep novamente com a bandeira -v para excluir linhas contendo "/boot". Finalmente utilizaremos o comando awk e acrescentaremos o valor da terceira palavra de cada linha para imprimir o resultado final da soma. O comando completo é o seguinte: ```df -m | grep "/dev/" | grep -v "/boot" | awk '{memory_use += $3} END {print memory_use}'```.

<img width="805" alt="Captura de pantalla 2022-08-03 a las 2 26 15" src="https://user-images.githubusercontent.com/66915274/182498837-4f883b25-e316-4c74-8f6b-a5e8b5d13289.png">

Para obter o espaço total, utilizaremos um comando muito semelhante. As únicas diferenças serão que os valores que adicionaremos serão os $2 em vez de $3 e a outra diferença é que no assunto aparece o tamanho total em Gb, pelo que, como resultado da soma nos dá o número em Mb devemos transformá-lo em Gb, pois deve dividir-se o número entre 1024 e retirar as casas decimais.

<img width="1195" alt="Screen Shot 2023-03-14 at 8 54 34 PM" src="https://user-images.githubusercontent.com/66915274/225121482-93ae204e-54eb-4397-b25c-b3d99229bba5.png">


Finalmente, precisamos de mostrar uma percentagem da memória utilizada. Para tal, mais uma vez, utilizaremos um comando muito semelhante aos dois anteriores. A única coisa que vamos mudar é que vamos combinar os dois comandos anteriores para termos duas variáveis, uma representando a memória utilizada e a outra o total. Uma vez feito isto, faremos uma operação para obter a percentagem ```use/total*100``` e o resultado desta operação será impresso tal como aparece no assunto, entre parênteses e com o símbolo % no final. O comando final é: ```df -m | grep "/dev/" | grep -v "/boot" | awk '{use += $3} {total += $2} END {printf("(%d%%%%)}, use/total*100}'```.

<img width="798" alt="Captura de pantalla 2022-08-03 a las 2 49 33" src="https://user-images.githubusercontent.com/66915274/182500836-dd4b068e-b6ce-4dc6-b832-f90acecfb71c.png">


### 5-6 Percentagem de utilização de CPU

Para ver a percentagem de utilização de CPU faremos uso do comando ```vmstat``` que mostra as estatísticas do sistema, permitindo-nos obter um detalhe geral dos processos, utilização de memória, actividade de CPU, estado do sistema, etc. Poderemos colocar se não houver opção mas no meu caso colocarei um intervalo de segundos de 1 a 4. Também faremos uso do comando ```tail -1``` que nos permitirá produzir apenas a última linha, depois dos 4 gerados apenas a última será impressa. Finalmente, imprimiremos apenas a palavra 15 que é a utilização de memória disponível. O comando completo é o seguinte: ```vmstat 1 4 | tail -1 | awk '{print %15}'```. O resultado deste comando é apenas uma parte do resultado final, uma vez que ainda é necessário fazer algumas operações no guião para o obter correctamente. O que teríamos de fazer é subtrair de 100 o montante devolvido pelo nosso comando, o resultado desta operação será impresso com uma casa decimal e uma % no final e a operação será feita. 

<img width="580" alt="Captura de pantalla 2022-08-03 a las 0 33 39" src="https://user-images.githubusercontent.com/66915274/182484896-def71bf0-b7eb-49d8-b83b-a019d15f62f1.png">

### 5-7 Último reinício

Para ver a data e hora do nosso último reboot utilizaremos o comando ```quem``` com a bandeira ```-b``` porque com esta flag veremos a hora do último boot do sistema. Como já aconteceu antes, mostra-nos mais informação do que queremos, por isso filtraremos e mostraremos apenas aquilo em que estamos interessados, para o fazer utilizaremos o comando awk e compararemos se a primeira palavra de uma linha for "sistema" a terceira palavra dessa linha, um espaço e a quarta palavra será impressa no ecrã. Todo o comando seria o seguinte: ```who -b | awk '$1 == "system" {print $3 " " $4}'```.

<img width="661" alt="Captura de pantalla 2022-08-02 a las 12 24 58" src="https://user-images.githubusercontent.com/66915274/182352895-d985e675-5afc-445a-bcd3-68189702fe70.png">

### 5-8 Utilização de LVM

Para verificar se o LVM está ou não activo, utilizaremos o comando lsblk, que nos mostra informação de todos os dispositivos de bloco (discos rígidos, SSD, memórias, etc.) entre toda a informação que nos fornece, podemos ver o lvm no tipo de gestor. Basicamente a condição que procuramos é contar o número de linhas onde "lvm" aparece e se houver mais de 0 imprimimos Sim, se houver 0 imprimimos Não. O comando completo seria: ```if [ $(lsblk | grep "lvm" | wc -l) -gt 0 ]; then echo yes; else echo no; fi```.

<img width="801" alt="Captura de pantalla 2022-08-02 a las 22 38 43" src="https://user-images.githubusercontent.com/66915274/182468904-3789e22f-dbde-4874-b153-0d86497c55e2.png">

### 5-9 Conexões TCP

Para olhar para o número de ligações TCP estabelecidas. Utilizaremos o comando ```ss``` para substituir o comando obsoleto netstat. Filtrar com a flag ```-ta``` para que apenas as ligações TCP sejam mostradas. Finalmente, vamos ver quais são as que estão estabelecidas, uma vez que também existem as que só ouvem, e fechar com wc -l para contar o número de linhas. O comando é o seguinte: ```ss -ta | grep ESTAB | wc -l```. 

<img width="479" alt="Captura de pantalla 2022-08-03 a las 0 53 36" src="https://user-images.githubusercontent.com/66915274/182487028-746244f8-2cda-4dc7-a14c-b2e5a7e0dc51.png">

### 5-10 Número de utilizadores

Utilizaremos o comando ```users``` que nos mostrará o nome dos utilizadores, sabendo isto, configuraremos wc -w para contar o número de palavras na saída do comando. Todo o comando tem o seguinte aspecto ```users | wc -w```.

<img width="380" alt="Captura de pantalla 2022-08-02 a las 12 33 29" src="https://user-images.githubusercontent.com/66915274/182354436-282547cf-22c8-4b03-9484-6801c0466de7.png">


### 5-11 Endereço IP e MAC

Para obter o endereço do anfitrião utilizaremos o comando ```Hostname -I``` e para obter o endereço MAC utilizaremos o comando ```ip link``` que é utilizado para mostrar ou modificar as interfaces de rede. Como mais do que uma interface, aparecem os IP's, etc. Utilizaremos o comando grep para procurar o que queremos imprimir no ecrã apenas o que nos é pedido. Para tal, utilizaremos ```ip link | grep "link/ether" | awk '{print $2}'``` e, desta forma, imprimiremos apenas o MAC.

<img width="639" alt="Captura de pantalla 2022-08-02 a las 14 53 14" src="https://user-images.githubusercontent.com/66915274/182379380-8e3b803d-d001-42ae-8aea-467e8c9f3ea9.png">

### 5-12 Número de comandos executados com sudo

Para obter o número de comandos que são executados com o sudo, utilizaremos o comando jornalctl, que é uma ferramenta responsável pela recolha e gestão dos registos do sistema. Depois colocamos ```_COMM=sudo``` para filtrar as entradas, especificando o seu caminho. No nosso caso, colocamos ```_COMM```, uma vez que se refere a um script executável. Depois de filtrarmos a pesquisa e só aparecerem os logs do sudo, ainda temos de filtrar um pouco mais porque quando se faz o log in ou log out como root também aparece no log, então para terminar a filtragem colocaremos um ```grep COMMAND``` e assim só aparecem as linhas de comando. Finalmente, colocaremos ````wc -l```` para que as linhas sejam listadas. O comando completo é o seguinte: ```journalctl _COMM=sudo | grep COMMAND | wc -l)```. Para verificar se funciona correctamente, podemos executar o comando no terminal, colocar um comando que inclui o sudo e executar novamente o comando e este deve
aumentar o número de execuções de sudo.

<img width="632" alt="Captura de pantalla 2022-08-02 a las 23 50 39" src="https://user-images.githubusercontent.com/66915274/182479668-949b8eee-81f6-4593-83f4-99053d199f1b.png">

### 5-13 Resultado total do script

⚠️ Lembre-se de não copiar e colar se não souber como funciona cada comando. ⚠️

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
Script visto de nano ↙️

<img width="911" alt="Captura de pantalla 2022-08-03 a las 3 47 31" src="https://user-images.githubusercontent.com/66915274/182506484-f5a095b8-4751-461e-a114-f8e36b4cfa9a.png">

Resultado após a execução do script ↙️

<img width="796" alt="Captura de pantalla 2022-08-03 a las 3 46 15" src="https://user-images.githubusercontent.com/66915274/182506357-f5466a97-380b-4b6d-9b79-89e01a31498a.png">

## 6- Crontab ⏰

🧠 <b>O que é crontab❓</b>É um gestor de processos de fundo. Os processos especificados serão executados no momento que especificar no ficheiro crontab.

Para termos a crontab correctamente configurada, devemos editar o ficheiro crontab com o seguinte comando ```sudo crontab -u root -e```. 

No ficheiro devemos adicionar o seguinte comando para que o script seja executado de 10 em 10 minutos ```*/10 * * * * sh /ruta del script```. 

<img width="798" alt="Captura de pantalla 2022-08-03 a las 4 40 18" src="https://user-images.githubusercontent.com/66915274/182512395-eaebabc2-5866-4ae3-966c-1a80818cde07.png">

Funcionamento de cada parâmetro da crontab: 

m ➤ Corresponde ao minuto em que o script será executado, o valor varia de 0 a 59.

h ➤ A hora exacta, o formato de 24 horas é utilizado, os valores variam entre 0 e 23, sendo 0 às 12:00 da meia-noite.

dom ➤ Refere-se ao dia do mês, por exemplo, pode especificar 15 se quiser correr todos os 15 dias.

dow ➤ Significa o dia da semana, pode ser numérico (0 a 7, onde 0 e 7 são domingo) ou as 3 primeiras letras do dia em inglês: mon, tue, tue, wed, thu, fri, sat, sun.

user ➤ Definir o utilizador que vai executar o comando, pode ser o root, ou outro utilizador desde que tenha permissões para executar o script.

command ➤ Refere-se ao comando ou caminho absoluto do script a ser executado.

## 7- Signature.txt 📝

Para obter a assinatura, a primeira coisa a fazer é desligar a máquina virtual, porque assim que a ligar ou modificar algo, a assinatura mudará.

<img width="834" alt="Captura de pantalla 2022-08-03 a las 4 47 32" src="https://user-images.githubusercontent.com/66915274/182513283-1cfc319f-982d-47cf-a596-8475d4c96616.png">

O próximo passo será localizar o caminho onde temos o .vdi da nossa máquina virtual. 

<img width="465" alt="Screen Shot 2022-08-03 at 4 57 37 AM" src="https://user-images.githubusercontent.com/66915274/182514499-f0ad5ba7-c0c2-493e-b0ae-9b79c970816e.png">

Finalmente, faremos ````shasum nomemáquina.vdi```` e isto dar-nos-á a assinatura. O resultado desta assinatura é o que teremos de adicionar ao nosso ficheiro signature.txt para mais tarde carregar o ficheiro para o repositório intra. É muito importante não reabrir a máquina, pois isto irá modificar a assinatura. Para as correcções lembrem-se de clonar a máquina para que a possam ligar sem medo de alterar a assinatura.

🧠 <b>O que é shasum❓</b> Um comando para identificar a integridade de um ficheiro através da soma de verificação do hash SHA-1 de um ficheiro.

<img width="416" alt="Screen Shot 2022-08-03 at 4 58 48 AM" src="https://user-images.githubusercontent.com/66915274/182514627-f11026d0-de0d-447d-a2e4-31a3c1af0f35.png">

## 8- Bonus ⭐️

### 8.1- Particionamento manual do disco

1 ◦ Ao escolher o particionamento do disco, seleccionar o particionamento manual. Desta forma, podemos editar as partições uma a uma.

<img width="789" alt="Screen Shot 2022-10-23 at 4 30 48 PM" src="https://user-images.githubusercontent.com/66915274/197397840-b6ae9d65-a6aa-4a5d-a03f-856d9ce81644.png">

2 ◦ Esta secção mostra uma visão geral das nossas divisórias e pontos de montagem. Actualmente não temos divisórias feitas. Para criar uma nova tabela de partições, devemos escolher o dispositivo onde as queremos criar. No nosso caso, escolheremos o único disponível.

<img width="793" alt="Screen Shot 2022-10-23 at 4 35 39 PM" src="https://user-images.githubusercontent.com/66915274/197398114-44abc561-d34d-47c9-b512-581b4ec6fddb.png">

3 ◦ Aceitamos a mensagem de confirmação. Basicamente, avisa-nos que se já existirem partições no dispositivo, elas serão apagadas e que se tivermos a certeza de criar uma nova tabela de partições vazia.

<img width="770" alt="Screen Shot 2022-10-23 at 4 36 08 PM" src="https://user-images.githubusercontent.com/66915274/197398137-b9fe1f96-5907-462e-8a50-44b71ae2aefe.png">

4 ◦ Uma vez concluída a etapa anterior, podemos ver como aparece a nossa tabela de partição vazia. Agora temos de a configurar, para o fazermos temos de a seleccionar.

<img width="786" alt="Screen Shot 2022-10-23 at 4 36 35 PM" src="https://user-images.githubusercontent.com/66915274/197398172-b05fa7aa-e5b4-40cb-afd4-03a1404d7885.png">

5 ◦ Iremos criar uma nova partição.

<img width="512" alt="Screen Shot 2022-10-23 at 4 36 54 PM" src="https://user-images.githubusercontent.com/66915274/197398199-70570553-de1b-49a9-8c44-da9a1e4b5c1e.png">

Começaremos por criar esta:

![image](https://user-images.githubusercontent.com/66915274/197427077-48636236-4012-4edf-b0e4-319db502e685.png)

6 ◦ Como o assunto indica, o tamanho da divisória deve ser de 500 megabytes.

<img width="777" alt="Screen Shot 2022-10-23 at 4 37 27 PM" src="https://user-images.githubusercontent.com/66915274/197398241-604b2bb2-7303-412a-b382-40bfbf443ed0.png">

7 ◦ Escolher o tipo de divisória. Escolhemos a primária, pois será a partição onde o Sistema Operativo será instalado.

<img width="457" alt="Screen Shot 2022-10-23 at 4 37 38 PM" src="https://user-images.githubusercontent.com/66915274/197398253-2c0f8205-3d3f-4ab7-94a3-70c37ee014d9.png">

Breve descrição de todos os tipos de divisórias:

◦ <b>Primária:</b> A única divisória em que um sistema operativo pode ser instalado. Só pode haver 4 partições primárias por disco rígido ou 3 primárias e 1 estendida.

◦ <b>Secundário/Extendido:</b>  Foi concebido para quebrar a limitação de 4 partições primárias num único disco físico. Apenas uma dessas partições pode existir por disco, e só pode conter partições lógicas.

◦ <b>Lógica:</b>  Ocupa uma parte da partição alargada/primária ou a sua totalidade, que foi formatada com um tipo específico de sistema de ficheiros (no nosso caso utilizaremos ext4) e foi-lhe atribuída uma unidade, pelo que o sistema operativo reconhece as partições lógicas ou o seu sistema de ficheiros. Pode haver um máximo de 23 partições lógicas numa partição alargada, no entanto o SO linux com o qual estamos actualmente a trabalhar reduz para 15, mais do que suficiente para este projecto. 

8 ◦ Seleccionaremos o início, pois queremos que a nova partição seja criada no início do espaço disponível.

<img width="787" alt="Screen Shot 2022-10-23 at 4 37 52 PM" src="https://user-images.githubusercontent.com/66915274/197398265-c63d7b32-55b7-45ad-86b3-166e44cfd598.png">

9 ◦ A captura de ecrã seguinte mostra os detalhes da divisória. Modificaremos o ponto de montagem a que o assunto especifica.

<img width="781" alt="Screen Shot 2022-10-23 at 4 38 27 PM" src="https://user-images.githubusercontent.com/66915274/197398293-2487ded0-2584-48c4-a5ea-1f2464ec39f9.png">

10 ◦ Escolhemos boot como ponto de montagem para a nossa partição.

<img width="577" alt="Screen Shot 2022-10-23 at 4 38 49 PM" src="https://user-images.githubusercontent.com/66915274/197398322-51b9854b-ab32-4d81-8126-3ef3913858a6.png">

11 ◦ Concluímos a configuração da partição actual.

<img width="787" alt="Screen Shot 2022-10-23 at 4 39 07 PM" src="https://user-images.githubusercontent.com/66915274/197398336-72b17153-73dc-48a5-b7d3-839877e8983b.png">

12 ◦ Uma vez concluída a etapa anterior, a partição deve aparecer. Agora devemos criar uma partição lógica com todo o espaço disponível em disco, que não tenha um ponto de montagem e esteja encriptada. Para o fazer, seleccione o espaço livre onde pretende criá-la.

<img width="781" alt="Screen Shot 2022-10-23 at 4 39 37 PM" src="https://user-images.githubusercontent.com/66915274/197398367-ee8a1f5d-3941-4a86-a775-90f29b1c955e.png">

![image](https://user-images.githubusercontent.com/66915274/197431553-718358bb-6570-41dd-b114-09acc347999d.png)

13 ◦ Criar uma nova partição.

<img width="462" alt="Screen Shot 2022-10-23 at 4 39 58 PM" src="https://user-images.githubusercontent.com/66915274/197398396-843c7fb3-b945-4305-a960-02aa9d4ca940.png">

14 ◦ Seleccionar o tamanho máximo.

<img width="779" alt="Screen Shot 2022-10-23 at 4 40 26 PM" src="https://user-images.githubusercontent.com/66915274/197398425-63205376-839f-4986-a8d0-981cdaa380e4.png">

15 ◦ Seleccionar o tipo de divisória, neste caso, lógica.

<img width="466" alt="Screen Shot 2022-10-23 at 4 40 53 PM" src="https://user-images.githubusercontent.com/66915274/197398448-49c99180-9a3d-4dd4-a9ce-d680bfdefa1c.png">

16 ◦ Modificaremos o ponto de montagem.

<img width="788" alt="Screen Shot 2022-10-23 at 4 41 44 PM" src="https://user-images.githubusercontent.com/66915274/197398500-188cc4fb-4eb5-4a56-893b-58838877c056.png">

17 ◦ Escolheremos a opção de não a montar.

<img width="590" alt="Screen Shot 2022-10-23 at 4 42 11 PM" src="https://user-images.githubusercontent.com/66915274/197398518-f6fb7588-8c53-40a9-9ceb-238d6a62d942.png">

18 ◦ Concluímos a configuração da partição actual.

<img width="788" alt="Screen Shot 2022-10-23 at 4 42 41 PM" src="https://user-images.githubusercontent.com/66915274/197398541-922f2c4d-ed5a-4d92-8083-ccf57aec3dee.png">

19 ◦ Iremos criar volumes encriptados. A fim de encriptar a nossa partição.

<img width="786" alt="Screen Shot 2022-10-23 at 4 43 08 PM" src="https://user-images.githubusercontent.com/66915274/197398562-2369fa90-7db9-4ba3-abed-7ac15ede8b81.png">

20 ◦ Aceitamos a mensagem de confirmação.

<img width="777" alt="Screen Shot 2022-10-23 at 4 43 27 PM" src="https://user-images.githubusercontent.com/66915274/197398573-9720e351-04f4-49f0-a3dc-fe0ce1ada296.png">

21 ◦ Criamos os volumes encriptados.

<img width="596" alt="Screen Shot 2022-10-23 at 4 43 46 PM" src="https://user-images.githubusercontent.com/66915274/197398595-b36ab8da-86c6-483a-99fd-079293a92570.png">

22 ◦ Seleccione a partição que pretende encriptar.

<img width="568" alt="Screen Shot 2022-10-23 at 4 44 06 PM" src="https://user-images.githubusercontent.com/66915274/197398615-7c9f8e45-7885-4f39-84eb-e3a056eeb2c7.png">

23 ◦ Concluímos a configuração da partição actual.

<img width="787" alt="Screen Shot 2022-10-23 at 4 44 35 PM" src="https://user-images.githubusercontent.com/66915274/197398649-06749ec8-903d-4b1a-af2a-c2dad77bcaec.png">

24 ◦ Fazemo-lo porque não queremos criar mais volumes encriptados.

<img width="589" alt="Screen Shot 2022-10-23 at 4 44 49 PM" src="https://user-images.githubusercontent.com/66915274/197398663-0bd74c65-b3fd-430c-b3e6-4f1e0c76ae8d.png">

25 ◦ Aceitamos a mensagem de confirmação. Ela diz-nos que tudo dentro da partição será encriptado e que não deverá demorar muito tempo a terminar.

<img width="783" alt="Screen Shot 2022-10-23 at 4 45 06 PM" src="https://user-images.githubusercontent.com/66915274/197398670-91db3e3e-b271-4e1b-ad8a-28ceb06e0897.png">

26 ◦ Não importa se demora muito ou pouco tempo, clicamos em cancelar, pois não há nada a encriptar, uma vez que a partição está vazia.

<img width="789" alt="Screen Shot 2022-10-23 at 4 45 27 PM" src="https://user-images.githubusercontent.com/66915274/197398685-6603ef31-d499-46da-949f-ade8e2a05bf9.png">

27 ◦ Mais uma vez teremos de definir uma palavra-passe, desta vez será a frase de encriptação. Como mencionei anteriormente, terá de repetir o processo e deverá escrevê-la, pois será importante no futuro.

<img width="779" alt="Screen Shot 2022-10-23 at 4 48 38 PM" src="https://user-images.githubusercontent.com/66915274/197398855-0c93f419-897e-4eee-9499-18321d8e8dfd.png">

28 ◦ Repetimos a frase de encriptação.

<img width="722" alt="Screen Shot 2022-10-23 at 4 49 01 PM" src="https://user-images.githubusercontent.com/66915274/197398875-3fa85638-7105-42bf-bbc2-e189fbbc1918.png">

29 ◦ Vamos configurar o gestor de volume lógico. 

<img width="785" alt="Screen Shot 2022-10-23 at 4 50 17 PM" src="https://user-images.githubusercontent.com/66915274/197398933-85e0025e-0a4d-41f0-8fd0-5f0c8ee32e9b.png">

30 ◦ Aceitaremos a mensagem de confirmação, uma vez que concordamos em guardar as alterações no disco.

<img width="786" alt="Screen Shot 2022-10-23 at 4 50 42 PM" src="https://user-images.githubusercontent.com/66915274/197398945-d79ea2a7-a13e-4e6a-9e9c-40bdcd2dd502.png">

31 ◦ Iremos criar um novo grupo de volume. Os grupos de volume agrupam as partições.

<img width="454" alt="Screen Shot 2022-10-23 at 4 52 04 PM" src="https://user-images.githubusercontent.com/66915274/197399021-29b21274-37c1-4fd9-8526-962969d1cce3.png">

32 ◦ Introduza o nome que pretende dar-lhe: ```LVMGroup``` como indicado pelo assunto.

<img width="695" alt="Screen Shot 2022-10-23 at 4 52 58 PM" src="https://user-images.githubusercontent.com/66915274/197399065-1ac8d80d-9e18-4b4a-a60f-11496e7de26d.png">

33 ◦ Seleccione a partição onde pretende criar o grupo. 

<img width="590" alt="Screen Shot 2022-10-23 at 4 53 22 PM" src="https://user-images.githubusercontent.com/66915274/197399089-5ea5f48e-176c-4278-8b14-a13b7f5ee45c.png">

34 ◦ Agora temos de criar todas as partições lógicas. Como temos de repetir as mesmas acções várias vezes, há capturas que não serão documentadas.

![image](https://user-images.githubusercontent.com/66915274/197439138-889d6368-1875-402b-a094-bd146bb7cb8a.png)


<img width="457" alt="Screen Shot 2022-10-23 at 4 53 50 PM" src="https://user-images.githubusercontent.com/66915274/197399108-fb566eb4-664f-4509-8948-ab4ed04407b5.png">

35 ◦ Começaremos por escolher o grupo onde queremos que eles sejam criados. Seleccionamos o único disponível (aquele que acabámos de criar).

<img width="760" alt="Screen Shot 2022-10-23 at 4 54 02 PM" src="https://user-images.githubusercontent.com/66915274/197399115-e7d3b313-763c-421c-a71d-850d318432e7.png">

36 ◦ A ordem de criação das unidades lógicas será a mesma que a do assunto, portanto comece pela raiz e termine com var-log. Depois seleccionaremos o nome do volume lógico.

<img width="662" alt="Screen Shot 2022-10-23 at 4 55 42 PM" src="https://user-images.githubusercontent.com/66915274/197399188-6ae8c83b-057d-498f-b112-9116079b0808.png">

37 ◦ O tamanho, como o assunto indica, será 10g.

<img width="782" alt="Screen Shot 2022-10-23 at 4 56 21 PM" src="https://user-images.githubusercontent.com/66915274/197399216-c65f43ca-fb8e-4d05-9212-24ad2ee87b39.png">

38 ◦ Repetimos o processo de ```swap```. Apenas mudaremos o nome e o tamanho.

<img width="443" alt="Screen Shot 2022-10-23 at 4 56 49 PM" src="https://user-images.githubusercontent.com/66915274/197399239-c26598cb-e7bb-474c-aece-90f043e1990f.png">

<img width="751" alt="Screen Shot 2022-10-23 at 4 57 26 PM" src="https://user-images.githubusercontent.com/66915274/197399278-c5cd5a9c-2ab1-42b9-8871-b58e9b33b4b6.png">

<img width="667" alt="Screen Shot 2022-10-23 at 4 57 41 PM" src="https://user-images.githubusercontent.com/66915274/197399288-7ecf6adf-aaf5-46bf-959f-2159d19b7bbf.png">

<img width="782" alt="Screen Shot 2022-10-23 at 4 58 11 PM" src="https://user-images.githubusercontent.com/66915274/197399310-fc6c397e-8257-4e06-8fba-ad35431c9b96.png">

39 ◦ Repetimos o processo de ```home```. Apenas mudaremos o nome e o tamanho.

<img width="476" alt="Screen Shot 2022-10-23 at 4 58 57 PM" src="https://user-images.githubusercontent.com/66915274/197399347-a815d58b-686e-4d9d-bb5c-34a7b54476ab.png">

<img width="756" alt="Screen Shot 2022-10-23 at 4 59 07 PM" src="https://user-images.githubusercontent.com/66915274/197399355-28617029-c28c-4ca4-b56b-646e066cded6.png">

<img width="672" alt="Screen Shot 2022-10-23 at 5 01 13 PM" src="https://user-images.githubusercontent.com/66915274/197399433-1e9c7110-9240-4982-9835-b026ed73171f.png">

<img width="770" alt="Screen Shot 2022-10-23 at 5 04 34 PM" src="https://user-images.githubusercontent.com/66915274/197399610-247a7a35-0141-4c14-884e-7ecd07caa96d.png">

40 ◦ Repetimos o processo de ```var```. Apenas mudaremos o nome e o tamanho.

<img width="482" alt="Screen Shot 2022-10-23 at 5 05 10 PM" src="https://user-images.githubusercontent.com/66915274/197399644-58da651c-f4ad-4d1e-b128-de87c92cc292.png">

<img width="700" alt="Screen Shot 2022-10-23 at 5 05 30 PM" src="https://user-images.githubusercontent.com/66915274/197399662-32ab0a06-c14d-4a0e-ac80-cb0d12fc24eb.png">

<img width="774" alt="Screen Shot 2022-10-23 at 5 06 03 PM" src="https://user-images.githubusercontent.com/66915274/197399693-b49c2ffe-b21a-43c5-bd3f-160bc544b072.png">

41 ◦ Repetimos o processo para ```srv```. Apenas mudaremos o nome.

<img width="446" alt="Screen Shot 2022-10-23 at 5 06 14 PM" src="https://user-images.githubusercontent.com/66915274/197399702-6d531de3-690d-458d-9a3b-bf6ceedd7cda.png">

<img width="754" alt="Screen Shot 2022-10-23 at 5 06 39 PM" src="https://user-images.githubusercontent.com/66915274/197399724-0fdd75ad-e978-4468-8509-a62cdc4a3faf.png">

<img width="671" alt="Screen Shot 2022-10-23 at 5 06 57 PM" src="https://user-images.githubusercontent.com/66915274/197399744-b82b1dcd-09c7-44cc-a2ab-b6079abcbb5a.png">

<img width="771" alt="Screen Shot 2022-10-23 at 5 07 13 PM" src="https://user-images.githubusercontent.com/66915274/197399757-94732b16-585e-4f7d-a20f-f7ef0814b4e7.png">

42 ◦Repetimos o processo para ```tmp```. Apenas mudaremos o nome.

<img width="481" alt="Screen Shot 2022-10-23 at 5 07 34 PM" src="https://user-images.githubusercontent.com/66915274/197399777-9d871f2a-856d-4b4d-ad18-1195001b0fdf.png">

<img width="732" alt="Screen Shot 2022-10-23 at 5 07 46 PM" src="https://user-images.githubusercontent.com/66915274/197399792-0794ace5-c236-4f68-b023-bb471753eba2.png">

<img width="659" alt="Screen Shot 2022-10-23 at 5 07 55 PM" src="https://user-images.githubusercontent.com/66915274/197399798-84a31102-6953-468b-85d4-0a248e98cb17.png">

<img width="768" alt="Screen Shot 2022-10-23 at 5 08 19 PM" src="https://user-images.githubusercontent.com/66915274/197399827-5dfc8571-e82c-4a28-aae7-dc716fb6e77b.png">

43 ◦ Finalmente, repetimos o processo para ```var-log```. Apenas mudaremos o nome e o tamanho.

<img width="448" alt="Screen Shot 2022-10-23 at 5 08 34 PM" src="https://user-images.githubusercontent.com/66915274/197399838-2cd49171-45dd-469a-887c-3ce99d84b7cd.png">

<img width="762" alt="Screen Shot 2022-10-23 at 5 08 40 PM" src="https://user-images.githubusercontent.com/66915274/197399841-04b75112-4d21-456c-bf50-8335839764e0.png">

<img width="658" alt="Screen Shot 2022-10-23 at 5 08 59 PM" src="https://user-images.githubusercontent.com/66915274/197399859-d706de2e-bb20-4a04-96db-4dd57b3778be.png">

<img width="779" alt="Screen Shot 2022-10-23 at 5 09 28 PM" src="https://user-images.githubusercontent.com/66915274/197399886-a1e9ee69-78a4-4071-af99-2192d535c6cd.png">


44 ◦ Uma vez concluídos todos os passos acima referidos, terminaremos a configuração do gestor lógico do volume.

<img width="438" alt="Screen Shot 2022-10-23 at 5 09 51 PM" src="https://user-images.githubusercontent.com/66915274/197399904-c584fcdf-eb38-486f-af12-7374f1e04465.png">

45 ◦ Agora podemos ver como na secção onde mostram todas as nossas divisórias e espaço livre, aparecem todas as divisórias lógicas que acabámos de criar. Bem, temos de configurar todas elas para seleccionar o sistema de ficheiros que queremos e o ponto de montagem indicado pelo assunto. Mais uma vez, iremos por ordem e seleccionar a primeira que aparece que é ```home```.

<img width="783" alt="Screen Shot 2022-10-23 at 5 10 36 PM" src="https://user-images.githubusercontent.com/66915274/197399944-bccbe599-b80a-4abe-ac6c-d770447ea727.png">

46 ◦ Mostra-nos a configuração da partição. Temos de escolher um sistema de ficheiros, uma vez que actualmente não o tem.

<img width="782" alt="Screen Shot 2022-10-23 at 5 10 55 PM" src="https://user-images.githubusercontent.com/66915274/197399976-9b871bda-9425-4dbe-b8c9-25c8c6d6c811.png">

47 ◦ Escolhemos o sistema de ficheiros Ext4, o sistema de ficheiros mais amplamente utilizado nas distribuições Linux.  

<img width="412" alt="Screen Shot 2022-10-23 at 5 11 18 PM" src="https://user-images.githubusercontent.com/66915274/197400000-2e855fc9-10b1-4f3e-9c58-85b6ff02a4fb.png">

48 ◦ Agora temos de seleccionar o ponto de montagem. 

<img width="782" alt="Screen Shot 2022-10-23 at 5 11 44 PM" src="https://user-images.githubusercontent.com/66915274/197400023-387a70aa-b491-43c0-91d2-cb378da9fc75.png">

49 ◦ Seleccione ```home``` como indicado no subject.

<img width="515" alt="Screen Shot 2022-10-23 at 5 11 54 PM" src="https://user-images.githubusercontent.com/66915274/197400040-e79cad4f-368b-4cee-9ec0-942f38b2f785.png">

50 ◦ Depois de a termos seleccionado, terminaremos a configuração da partição.

<img width="785" alt="Screen Shot 2022-10-23 at 5 12 10 PM" src="https://user-images.githubusercontent.com/66915274/197400059-ab96f2c4-cd92-47cb-a9ee-61257537ee6a.png">

51 ◦ Mais uma vez, estes passos podem tornar-se muito repetitivos, por isso não vou comentar muito. Repetimos tudo na mesma (excepto o ponto de montagem) para ```root```.

<img width="782" alt="Screen Shot 2022-10-23 at 5 13 36 PM" src="https://user-images.githubusercontent.com/66915274/197400135-c08444fe-e39d-45fa-a3b6-3c73db2a4935.png">

<img width="782" alt="Screen Shot 2022-10-23 at 5 13 53 PM" src="https://user-images.githubusercontent.com/66915274/197400146-41ce0b0c-142c-46b4-a3c5-918676a3a852.png">

<img width="421" alt="Screen Shot 2022-10-23 at 5 14 08 PM" src="https://user-images.githubusercontent.com/66915274/197400155-92759327-5671-41f4-8104-dd1de4bc88cb.png">

<img width="775" alt="Screen Shot 2022-10-23 at 5 14 22 PM" src="https://user-images.githubusercontent.com/66915274/197400171-6fd04783-e833-4afd-a753-4b943133a4ab.png">

<img width="525" alt="Screen Shot 2022-10-23 at 5 14 39 PM" src="https://user-images.githubusercontent.com/66915274/197400182-780e1917-3f77-4986-b0e8-b50a90d75403.png">

<img width="790" alt="Screen Shot 2022-10-23 at 5 14 52 PM" src="https://user-images.githubusercontent.com/66915274/197400186-88da831a-c672-4ec0-a64c-0ad2808bb6c5.png">

52 ◦ Repetir o processo para ```srv``` e mudar o ponto de montagem.

<img width="778" alt="Screen Shot 2022-10-23 at 5 15 05 PM" src="https://user-images.githubusercontent.com/66915274/197400198-599b4aa3-a511-45d1-86b0-dd42da4c380f.png">

<img width="778" alt="Screen Shot 2022-10-23 at 5 15 31 PM" src="https://user-images.githubusercontent.com/66915274/197400218-e6b26eb7-7933-426f-a7cd-a791400ebdab.png">

<img width="428" alt="Screen Shot 2022-10-23 at 5 15 37 PM" src="https://user-images.githubusercontent.com/66915274/197400222-95107b34-8d28-4d4d-a74b-7de6c6a46d33.png">

<img width="787" alt="Screen Shot 2022-10-23 at 5 15 44 PM" src="https://user-images.githubusercontent.com/66915274/197400227-20c13dc0-52cd-4c70-bf4e-531979c54a3e.png">

<img width="530" alt="Screen Shot 2022-10-23 at 5 15 52 PM" src="https://user-images.githubusercontent.com/66915274/197400238-3b403294-74d1-4e63-aca7-7d83447ed5b8.png">

<img width="790" alt="Screen Shot 2022-10-23 at 5 16 04 PM" src="https://user-images.githubusercontent.com/66915274/197400249-035f6b9d-3716-4565-9776-aa0af49b3fd7.png">

53 ◦ Para o ```swap```, abriremos uma excepção, pois o sistema de ficheiros será diferente. Seleccione ```swap```.

<img width="780" alt="Screen Shot 2022-10-23 at 5 16 32 PM" src="https://user-images.githubusercontent.com/66915274/197400272-112b44ef-4996-438a-90b8-6620cdd7d2ff.png">

54 ◦ Ao seleccionar o sistema de arquivo, deixe-o na ```swap area```.

<img width="785" alt="Screen Shot 2022-10-23 at 5 16 41 PM" src="https://user-images.githubusercontent.com/66915274/197400281-e12ee636-8696-4bee-9198-862b7d6be199.png">

55 ◦ Uma vez concluída a etapa anterior, terminaremos a configuração da partição.

<img width="370" alt="Screen Shot 2022-10-23 at 5 16 59 PM" src="https://user-images.githubusercontent.com/66915274/197400297-8eed129d-0ec0-49a8-8b2a-dd0d04055f75.png">

<img width="787" alt="Screen Shot 2022-10-23 at 5 17 09 PM" src="https://user-images.githubusercontent.com/66915274/197400309-74e83209-4b2a-4e27-9a67-44373c1db362.png">

56 ◦ Agora faremos o mesmo que antes, mas agora fá-lo-emos com o ```tmp``` e mudaremos o ponto de montagem.

<img width="777" alt="Screen Shot 2022-10-23 at 5 17 41 PM" src="https://user-images.githubusercontent.com/66915274/197400341-608516f6-0f5a-4cdd-83d8-c8fbd1635624.png">

<img width="778" alt="Screen Shot 2022-10-23 at 5 17 49 PM" src="https://user-images.githubusercontent.com/66915274/197400346-e9647c7a-a9a2-4a0f-b439-a912247fb3f9.png">

<img width="372" alt="Screen Shot 2022-10-23 at 5 18 01 PM" src="https://user-images.githubusercontent.com/66915274/197400360-1816d06a-252e-4d41-b1a2-fc547961f353.png">

<img width="781" alt="Screen Shot 2022-10-23 at 5 18 08 PM" src="https://user-images.githubusercontent.com/66915274/197400370-0474b71f-c1c3-445f-ba02-088dc1c64ce3.png">

<img width="496" alt="Screen Shot 2022-10-23 at 5 18 24 PM" src="https://user-images.githubusercontent.com/66915274/197400386-f66494c5-97b9-4bb9-8c75-5856d69d26cc.png">

<img width="783" alt="Screen Shot 2022-10-23 at 5 18 40 PM" src="https://user-images.githubusercontent.com/66915274/197400405-4a368bfb-f862-4bbd-a33e-b87c3038d232.png">

57 ◦ Repetimos novamente o processo para ```var```, alterando o ponto de montagem.

<img width="773" alt="Screen Shot 2022-10-23 at 5 19 13 PM" src="https://user-images.githubusercontent.com/66915274/197400447-85bcad13-8083-4aec-acb2-fa467e5d4e33.png">

<img width="790" alt="Screen Shot 2022-10-23 at 5 19 21 PM" src="https://user-images.githubusercontent.com/66915274/197400452-aed22368-4889-4c04-bf60-5a06fb93944e.png">

<img width="386" alt="Screen Shot 2022-10-23 at 5 19 28 PM" src="https://user-images.githubusercontent.com/66915274/197400459-b6f59948-e804-414a-b41d-21d2f495fccc.png">

<img width="780" alt="Screen Shot 2022-10-23 at 5 19 36 PM" src="https://user-images.githubusercontent.com/66915274/197400462-788d29e5-7798-418a-8725-3cb8dd2849bd.png">

<img width="515" alt="Screen Shot 2022-10-23 at 5 19 51 PM" src="https://user-images.githubusercontent.com/66915274/197400473-4508d9d6-481d-4f3a-9630-6c1eba7c5cc0.png">

<img width="779" alt="Screen Shot 2022-10-23 at 5 20 00 PM" src="https://user-images.githubusercontent.com/66915274/197400482-1f8c147f-66d8-438b-866f-3e9eff75ef5e.png">

58 ◦ Finalmente, repetimos o processo de ```var-log``` neste, teremos de entrar manualmente no ponto de montagem.

<img width="772" alt="Screen Shot 2022-10-23 at 5 20 23 PM" src="https://user-images.githubusercontent.com/66915274/197400513-53b3f899-47f5-4cdb-ab4b-205b1d1bce31.png">

![image](https://user-images.githubusercontent.com/66915274/197602511-fa34155b-3244-4b0c-8054-2778edecfb16.png)

![image](https://user-images.githubusercontent.com/66915274/197602585-03b540af-5d7a-4364-b90a-559bac0cb2a2.png)

![image](https://user-images.githubusercontent.com/66915274/197602630-cc749189-9ac9-48bc-a595-dc33282840ec.png)

![image](https://user-images.githubusercontent.com/66915274/197602673-5c18be85-1b0f-430b-b507-66711b807115.png)

![image](https://user-images.githubusercontent.com/66915274/197602699-fddadd2d-c54d-4313-8165-a93db1249b26.png)

![image](https://user-images.githubusercontent.com/66915274/197602741-431bd866-1558-4735-bb34-ab57dc5745b7.png)

59 ◦ Assim que tivermos completado todas as etapas acima, estamos quase a terminar, temos de clicar em Terminar partição para guardar todas as alterações no disco.

![image](https://user-images.githubusercontent.com/66915274/197602907-4a3ba459-1a5d-468e-81dc-5206403cf034.png)

60 ◦ Aceitar a mensagem e as alterações serão guardadas. Certificar-se de que todas as partições são as mesmas que na imagem do ecrã.

![image](https://user-images.githubusercontent.com/66915274/197602944-13ca67b2-bcc5-476c-84dc-aadc5e1d3baf.png)

61 ◦ Seleccionamos a opção ```No``` porque não precisamos de quaisquer pacotes adicionais. 

<img width="770" alt="Captura de pantalla 2022-07-13 a las 20 05 42" src="https://user-images.githubusercontent.com/66915274/178801099-2dda24f5-0d46-4184-8c44-a8fe0bf46527.png">

62 ◦ Nós escolhemos o nosso país.

<img width="756" alt="Captura de pantalla 2022-07-13 a las 20 14 23" src="https://user-images.githubusercontent.com/66915274/178802653-d9e8504a-b60b-4441-8ee3-8d48ca4a6bf0.png">

63 ◦ Escolhemos ```deb.debian.org```, pois é a nossa região onde teremos uma melhor conexão.

<img width="792" alt="Captura de pantalla 2022-07-13 a las 20 15 00" src="https://user-images.githubusercontent.com/66915274/178802772-4f67cd99-60d5-4439-8502-317e81e07d70.png">

64 ◦ Deixe esta opção vazia e clique directamente em ```Continue```.

<img width="797" alt="Captura de pantalla 2022-07-13 a las 20 17 24" src="https://user-images.githubusercontent.com/66915274/178803208-2969acae-3fa7-423e-8a3c-bb7c76eff824.png">

65 ◦ Seleccionamos a opção ```No``` porque não queremos que os programadores vejam as nossas estatísticas, mesmo que sejam anónimas.

<img width="796" alt="Captura de pantalla 2022-07-13 a las 20 21 54" src="https://user-images.githubusercontent.com/66915274/178803926-a4efbc70-f3e2-4e6c-9809-9152478d8237.png">

66 ◦ Remova todas as opções de software (com a barra de espaço) e clique em ```Continue```.

<img width="797" alt="Captura de pantalla 2022-07-13 a las 20 24 17" src="https://user-images.githubusercontent.com/66915274/178804377-e775b89e-93d4-482f-a4d0-0ef126f47719.png">

67 ◦ Seleccione ```Yes``` para instalar [GRUB boot](https://es.wikipedia.org/wiki/GNU_GRUB) no disco rígido.

<img width="792" alt="Captura de pantalla 2022-07-13 a las 20 26 24" src="https://user-images.githubusercontent.com/66915274/178804771-ba16e0b7-9f06-4c5b-9451-0bfd65efd2bb.png">

68 ◦ Escolha o dispositivo para a instalação do bootloader ```/dev/sda (ata_VBOX_HARDDISK)```.

<img width="792" alt="Captura de pantalla 2022-07-13 a las 20 35 46" src="https://user-images.githubusercontent.com/66915274/178806441-f1bf3159-4e09-4c9a-9102-b3261c9000d8.png">

69 ◦ Clique em ```Continue``` para terminar a instalação.

<img width="794" alt="Captura de pantalla 2022-07-13 a las 20 39 30" src="https://user-images.githubusercontent.com/66915274/178807102-e2a9722e-791f-48a0-ae35-b05b36a37ed2.png">

70 ◦ Uma vez terminada a instalação do debian, temos de configurar a nossa máquina virtual.

[Clique aqui para ir para a configuração da máquina virtual ⚙️](#4-configuración-de-la-máquina-virtual-%EF%B8%8F)

### 8.2 - Wordpress e configuração de serviços 🌐

### Lighttpd 

🧠 <b> O que é Lighttpd❓</b> É um servidor web concebido para ser rápido, seguro, flexível, e compatível com as normas. É optimizado para ambientes onde a velocidade é muito importante. Isto é porque consome menos CPU e RAM do que outros servidores.

1 ◦ Instalação de pacotes lighttpd.

<img width="791" alt="Screen Shot 2022-10-27 at 4 09 24 AM" src="https://user-images.githubusercontent.com/66915274/198174389-428c30e0-c437-4bc1-b8df-40dd2fb0c0ce.png">

2 ◦ Permitimos ligações através da porta 80 com o comando ```sudo ufw allow 80```.

<img width="306" alt="Screen Shot 2022-10-27 at 4 15 24 AM" src="https://user-images.githubusercontent.com/66915274/198175046-8ea3f052-32f1-4107-a9a1-c9271d6c9ce6.png">

3 ◦ Verificamos que realmente permitimos. O porto 80 e permitir deve aparecer.

<img width="460" alt="Screen Shot 2022-10-27 at 4 15 45 AM" src="https://user-images.githubusercontent.com/66915274/198175075-da6833f1-2360-4e08-b708-99f920b8215c.png">

4 ◦ Adicione a regra que inclui a porta 80. Se não se lembrar como adicionar regras no reencaminhamento de portos. Configuração da máquina → Rede → Encaminhamento de Porta → Espelhar a captura.

<img width="877" alt="Screen Shot 2022-11-18 at 2 49 56 PM" src="https://user-images.githubusercontent.com/66915274/202720044-d7a51add-c5ee-4da4-9057-258e47cfd036.png">

### WordPress 

🧠 <b> O que é Wordpress❓</b> É um sistema de gestão de conteúdos centrado na criação de qualquer tipo de página web.

1 ◦ Para instalar a última versão do WordPress temos primeiro de instalar wget e zip. Para o fazer, usaremos o seguinte comando ```sudo apt install wget zip```.

🧠 <b> O que é wget❓</b> É uma ferramenta de linha de comando utilizada para descarregar ficheiros a partir da web.

🧠 <b> O que é zip❓</b> Este é um utilitário de linha de comando para comprimir e descomprimir ficheiros em formato ZIP.

<img width="584" alt="Screen Shot 2022-11-18 at 2 45 11 PM" src="https://user-images.githubusercontent.com/66915274/202719000-dfc10731-7d29-4976-9867-d2a38e0f6407.png">

2 ◦ Uma vez instalados os pacotes, devemos localizar-nos na pasta /var/wwww/ com o comando cd, aceder-lhe-emos. ```cd /var/wwww```.

<img width="361" alt="Screen Shot 2022-11-18 at 2 45 53 PM" src="https://user-images.githubusercontent.com/66915274/202719112-c238f259-2a59-41ea-bbaa-8676742b2ef2.png">

3 ◦ Uma vez no caminho /var/wwww/ temos de descarregar a última versão do WordPress. Como a minha língua materna é o espanhol, vou seleccionar a versão mais recente em espanhol. Usaremos o seguinte comando: ```sudo wget https://es.wordpress.org/latest-es_ES.zip```.

<img width="779" alt="Screen Shot 2022-11-18 at 2 47 00 PM" src="https://user-images.githubusercontent.com/66915274/202719349-442e9fd5-f96a-48af-8d7a-ea8a91a4d380.png">

4 ◦ Descompacte o ficheiro que acabou de descarregar com o comando ```sudo unzip latest-es_ES.zip```.

<img width="444" alt="Screen Shot 2022-11-18 at 2 47 25 PM" src="https://user-images.githubusercontent.com/66915274/202719435-99d6af72-98f4-47b0-befb-0f3e45db4520.png">

5 ◦ Vamos renomear a pasta html e chamar-lhe html_old. ```sudo mv html/ html_old/```.

<img width="402" alt="Screen Shot 2022-11-18 at 2 48 21 PM" src="https://user-images.githubusercontent.com/66915274/202719636-8deea2b6-2953-43da-86a7-17f76c14440a.png">

6 ◦ Agora vamos renomear a pasta wordpress e chamar-lhe html. ```sudo mv wordpress/ html```.

<img width="398" alt="Screen Shot 2022-11-18 at 2 48 49 PM" src="https://user-images.githubusercontent.com/66915274/202719749-4c914197-3891-4bcc-afb8-54c94b5f77cb.png">

7 ◦ Finalmente, colocaremos estas permissões na pasta html. Utilizaremos o comando ```sudo chmod -R 755 html```. O número 7 indica que o proprietário tem permissões de leitura, escrita e execução. O número 5 indica que o grupo e outros só têm permissões de leitura e execução.

<img width="396" alt="Screen Shot 2022-11-18 at 2 49 17 PM" src="https://user-images.githubusercontent.com/66915274/202719852-48b9ee14-3b15-49e2-bbd2-ca172a1f65ef.png">

### Mariadb

🧠 <b>O que é MariaDB❓</b> É uma base de dados. É utilizada para diversos fins, tais como armazenamento de dados, comércio electrónico, funções a nível empresarial e aplicações de registo.  

1 ◦ Vamos instalar os pacotes com o comando ```sudo apt install mariadb-server```

<img width="797" alt="Screen Shot 2022-10-27 at 4 17 09 AM" src="https://user-images.githubusercontent.com/66915274/198175218-65dec75f-5727-425c-97d0-2baa2b8cd457.png">

2 ◦ Como a configuração padrão deixa a sua instalação MariaDB insegura, utilizaremos um script fornecido pelo pacote mariadb-server para restringir o acesso ao servidor e remover contas não utilizadas. Iremos executar o script com o seguinte comando ```sudo mysql_secure_installation```. Assim que executarmos o guião, ele irá fazer-nos uma série de perguntas, perguntando se queremos mudar para a autenticação da tomada Unix. Como já temos uma conta raiz protegida, iremos escrever ```N```.

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

Switch to unix_socket autentication? Escolhemos ```N``` porque não queremos que mude para autenticação de tomada Unix porque já temos uma conta raiz protegida.

Change the root password? Escolhemos ```N```. Não queremos alterar a palavra-passe do utilizador de raiz. Por defeito não temos palavra-passe, mas em mariadb não é realmente root, uma vez que temos de lhe dar permissões de administrador.

Remove anonymous users? Escolhemos ```Y```. Por defeito quando se instala mariadb tem um utilizador anónimo, o que permite a qualquer pessoa entrar no mariadb sem ter de criar a sua própria conta de utilizador. Isto é concebido para fins de teste e para tornar a instalação mais suave. Quando deixamos o ambiente de desenvolvimento e queremos mudar para um ambiente de produção, temos de remover os utilizadores anónimos. 

Disallow root login remotely? Escolhemos ```Y```. A desactivação do login remoto de raiz impedirá qualquer pessoa de adivinhar a palavra-passe de raiz. Só nos será possível ligar à raiz a partir do anfitrião local.

Remove test database and acces to it? Escolhemos ```Y```. Isto irá remover a base de dados de testes e quaisquer utilizadores que tenham acesso à mesma.

Reaload privilege tables now? Escolhemos ```Y```. Isto irá recarregar as tabelas de permissão MySQL para que as alterações às definições de segurança entrem em vigor imediatamente.

1 ◦ Uma vez terminada a instalação da mariadb devemos criar a base de dados e o utilizador para o WordPress. Primeiro temos de aceder à mariadb.

<img width="492" alt="Screen Shot 2023-03-31 at 12 16 28 AM" src="https://user-images.githubusercontent.com/66915274/228976032-2a3bd66e-ce88-4bc1-9264-1d5d7f88f295.png">

2 ◦ Criamos uma base de dados para o WordPress. No meu caso, vou chamar-lhe wp_database. Vou fazer tudo isto com o comando ```CREATE DATABASE wp_database;```.

<img width="384" alt="Screen Shot 2023-03-31 at 9 53 17 PM" src="https://user-images.githubusercontent.com/66915274/229216821-fba3d891-c477-4e68-9799-57bcb9efcde3.png">

3 ◦ Para garantir que a base de dados para o WordPress foi criada, podemos visualizar todas as bases de dados existentes com o comando ```SHOW DATABASES;```.

<img width="282" alt="Screen Shot 2023-03-31 at 9 54 04 PM" src="https://user-images.githubusercontent.com/66915274/229216973-fa35f5e1-04f1-4e56-8c44-55c4ad5a8745.png">

4 ◦ A seguir, temos de criar um utilizador na base de dados. Utilizaremos o comando ```CREATE USER 'gemartin'@'localhost' IDENTIFIED BY '12345';```.

<img width="616" alt="Screen Shot 2023-03-31 at 9 56 59 PM" src="https://user-images.githubusercontent.com/66915274/229217478-6f7f5f3c-12cb-4d5a-981c-6fd53f884aa3.png">

5 ◦ Ligamos o novo utilizador à nossa base de dados de modo a conceder-lhe as permissões necessárias para poder trabalhar. Utilizaremos o comando ```GRANT ALL PRIVILEGES ON wp_database.* TO 'gemartin'@'localhost';```.

<img width="669" alt="Screen Shot 2023-03-31 at 10 01 32 PM" src="https://user-images.githubusercontent.com/66915274/229218529-e2cdcb3f-f8bc-4474-8e7b-c1cf9499aa57.png">

6 ◦ Actualizamos as permissões para que as alterações entrem em vigor com o comando ```FLUSH PRIVILEGES;```.

<img width="321" alt="Screen Shot 2023-03-31 at 10 02 01 PM" src="https://user-images.githubusercontent.com/66915274/229218623-bad5faf3-231e-4472-a617-2ead2e713313.png">

7 ◦ Uma vez concluída a etapa anterior, podemos sair de mariadb.

<img width="295" alt="Screen Shot 2023-04-01 at 10 43 40 PM" src="https://user-images.githubusercontent.com/66915274/229313206-36b09583-1930-4754-b70a-8d4caa38db9e.png">

### PHP

🧠 <b>O que é PHP❓</b> É uma linguagem de programação. É utilizada principalmente para desenvolver aplicações web dinâmicas e sites interactivos. O PHP corre no lado do servidor.

1 ◦ Instalamos os pacotes necessários para poder executar aplicações web escritas em linguagem PHP e que necessitam de se ligar a uma base de dados MySQL. Executamos o seguinte comando ```sudo apt install php-cgi php-mysql```.

<img width="541" alt="Screen Shot 2023-03-31 at 10 07 04 PM" src="https://user-images.githubusercontent.com/66915274/229308102-24ddd152-8687-410d-b207-953d36c9b591.png">

### Configuração WordPress

1 ◦ Aceder ao directório /var/wwww/html com o comando: ```cd /var/www/html```

<img width="326" alt="Screen Shot 2023-04-01 at 8 26 46 PM" src="https://user-images.githubusercontent.com/66915274/229308150-88ec9c15-4791-4541-baf2-5d2267b94eec.png">

2 ◦ Copie o ficheiro wp-config-sample.php e renomeie-o wp-config.php

<img width="616" alt="Screen Shot 2023-04-01 at 8 28 42 PM" src="https://user-images.githubusercontent.com/66915274/229308231-a022e3b4-1606-4958-b530-5b2ada908997.png">

3 ◦ Uma vez alterado o seu nome, editaremos o ficheiro wp-config.php ```nano wp-config.php``` e modificaremos os seguintes valores.

<img width="841" alt="Screen Shot 2023-04-01 at 8 42 25 PM" src="https://user-images.githubusercontent.com/66915274/229308713-bbbb69f4-5f6c-4146-bc10-006cd968fb95.png">

É necessário substituí-los pelos valores que definimos anteriormente quando criámos a base de dados e o utilizador, para que o WordPress possa ligar-se e fazer uso dela.

<img width="842" alt="Screen Shot 2023-04-01 at 8 46 08 PM" src="https://user-images.githubusercontent.com/66915274/229308845-4eac418d-c03f-48d1-9b74-463ef56a2ee5.png">

4 ◦ Permitimos o módulo fastcgi-php no Lighttpd para melhorar o desempenho e a velocidade das aplicações web no servidor. ```sudo lighty-enable-mod fastcgi```

![image](https://user-images.githubusercontent.com/66915274/230748612-8253b2ee-15c6-42e0-8745-2148f48c6962.png)

5 ◦ Permitimos o módulo fastcgi-php no Lighttpd para melhorar o desempenho e a velocidade das aplicações web baseadas em PHP no servidor. ```sudo lighty-enable-mod fastcgi-php```

![image](https://user-images.githubusercontent.com/66915274/230748560-bd225efc-ea65-4a7d-bf08-eb72d61da58e.png)

6 ◦ Actualizamos e aplicamos alterações à configuração com o comando ```sudo service lighttpd force-reload```.

![image](https://user-images.githubusercontent.com/66915274/230748835-9b44222d-e978-4a74-a501-e993c528a2a5.png)

7 ◦ Uma vez completados os passos anteriores, podemos voltar ao nosso navegador e digitar ```localhost```. Deverá ver o seguinte:

<img width="674" alt="Screen Shot 2023-04-01 at 8 49 00 PM" src="https://user-images.githubusercontent.com/66915274/229308949-6224a7c8-2dda-414a-b313-c14e981aca01.png">

<img width="1075" alt="Screen Shot 2023-04-01 at 8 00 38 PM" src="https://user-images.githubusercontent.com/66915274/229308962-d39b1b6b-62cc-49d1-ad13-a016d6e73683.png">

8 ◦ Temos de preencher todos os campos. No meu caso, coloquei o seguinte:

<img width="793" alt="Screen Shot 2023-04-01 at 8 02 29 PM" src="https://user-images.githubusercontent.com/66915274/229309346-c712fff4-1530-42c8-ad9e-a59f85d4de51.png">

9 ◦ Uma vez preenchidos todos os campos, devemos clicar em ```Install WordPress``` e teremos terminado a instalação. Verá o próximo separador. Agora o WordPress pode criar as tabelas e descarregar todos os dados que necessita para trabalhar na base de dados que lhe atribuímos.

<img width="798" alt="Screen Shot 2023-04-01 at 8 02 52 PM" src="https://user-images.githubusercontent.com/66915274/229309399-719f525e-7859-468f-a9e6-6b6954102153.png">

10 ◦ Se voltarmos a aceder ao nosso localhost a partir do browser, podemos ver a nossa página funcional.

<img width="2560" alt="Screen Shot 2023-04-01 at 9 02 51 PM" src="https://user-images.githubusercontent.com/66915274/229309529-96f3a1bb-d4a2-434f-bc01-2f2db0e0839d.png">

11 ◦ Se quisermos aceder ao painel de administração para fazer alterações ao nosso site, teremos de colocar no browser ```localhost/wp-admin``` e iniciar sessão com a nossa conta

<img width="368" alt="Screen Shot 2023-04-01 at 9 05 41 PM" src="https://user-images.githubusercontent.com/66915274/229309619-024d5dcc-ea8d-4895-88f3-bb65fcdca7e2.png">

<img width="359" alt="Screen Shot 2023-04-01 at 9 06 44 PM" src="https://user-images.githubusercontent.com/66915274/229309653-02e398e9-0c28-470e-825d-1431f7ca2bc2.png">

12 ◦ Uma vez iniciada a sessão, pode modificar o que quiser. A personalização da página é opcional, uma vez que não está especificada no assunto deste guia, não a trataremos. 

<img width="1100" alt="Screen Shot 2023-04-01 at 9 07 38 PM" src="https://user-images.githubusercontent.com/66915274/229309676-b670be09-47dd-445f-969a-bb41131aa3f9.png">


### 8.3 - Serviço adicional ➕

### LiteSpeed ⚡️

🧠 <b>O que é LiteSpeed❓</b> É um software proprietário de servidor web. É o quarto servidor web mais popular, e estima-se que seja utilizado por 10% dos sítios web.

1 ◦  Antes de instalar qualquer software, é importante assegurar que o sistema está actualizado.

```sudo apt update```

<img width="701" alt="Screen Shot 2022-11-25 at 2 59 17 AM" src="https://user-images.githubusercontent.com/66915274/203885206-209ac64f-51a3-42e4-814e-2063cf83a156.png">


```sudo apt upgrade```

<img width="507" alt="Screen Shot 2022-11-25 at 3 00 18 AM" src="https://user-images.githubusercontent.com/66915274/203885306-3b3eb6cd-64cb-4d34-967a-19e650286cf5.png">

2 ◦ Por defeito, o OpenLiteSpeed está disponível no repositório base do Debian 11. Assim, deve executar o seguinte comando para adicionar o repositório OpenLiteSpeed ao seu sistema Debian:

```wget -O - http://rpms.litespeedtech.com/debian/enable_lst_debian_repo.sh | sudo bash```

Como o comando é longo, liguei-me via ssh.

<img width="1129" alt="Screen Shot 2022-11-25 at 3 05 49 AM" src="https://user-images.githubusercontent.com/66915274/203885808-b4e0ff9a-580c-4121-b06f-ec229e514df9.png">

3 ◦ Mais uma vez, actualizamos os pacotes e instalamos o OpenLiteSpeed.

```sudo apt update```

<img width="627" alt="Screen Shot 2022-11-25 at 3 07 31 AM" src="https://user-images.githubusercontent.com/66915274/203885968-e0297682-b18c-4363-8fcb-7553cd908f91.png">

```sudo apt install openlitespeed```

<img width="801" alt="Screen Shot 2022-11-25 at 3 11 22 AM" src="https://user-images.githubusercontent.com/66915274/203886321-dbda490e-726d-4dfb-aa91-b9e10206976a.png">


4 ◦ A password predefinida para OpenLiteSpeed é 123456. Alteraremos a palavra-passe para algo mais seguro com o seguinte comando.

```sudo /usr/local/lsws/admin/misc/admpass.sh```

<img width="607" alt="Screen Shot 2022-11-25 at 3 12 33 AM" src="https://user-images.githubusercontent.com/66915274/203886432-cb14665f-63a0-4373-919d-0dff7c04b212.png">

5 ◦ Configuramos a firewall para permitir ligações através das portas 8088 e 7080. Depois adicionamos as regras no reencaminhamento de portas.

```sudo ufw allow 8088/tcp```

<img width="446" alt="Screen Shot 2022-11-25 at 3 15 39 AM" src="https://user-images.githubusercontent.com/66915274/203886798-41d4c14f-cb4a-4982-bd92-82ade321f244.png">

```sudo ufw allow 7080/tcp```

<img width="445" alt="Screen Shot 2022-11-25 at 3 15 59 AM" src="https://user-images.githubusercontent.com/66915274/203886833-f9016672-8fda-46fc-87a9-cd194de3cc1b.png">

```sudo ufw reload```

<img width="393" alt="Screen Shot 2022-11-25 at 3 16 18 AM" src="https://user-images.githubusercontent.com/66915274/203886863-03406d5c-456a-4e80-83e9-1bf3904154d3.png">

Regras de encaminhamento de portos.

<img width="825" alt="Screen Shot 2022-11-25 at 3 16 52 AM" src="https://user-images.githubusercontent.com/66915274/203886923-1db4cf56-d197-4c41-87f6-846253e08450.png">


6 ◦ Uma vez concluída a etapa anterior, podemos ligar-nos. Colocaremos no motor de busca do nosso navegador ```localhost:7080``` fornecemos as nossas credenciais de login e teremos acesso a tudo.

<img width="800" alt="Screen Shot 2022-11-25 at 3 18 53 AM" src="https://user-images.githubusercontent.com/66915274/203887182-73d29abc-674c-4ace-bffb-de42b636ec38.png">

<img width="1206" alt="Screen Shot 2022-11-24 at 8 49 24 PM" src="https://user-images.githubusercontent.com/66915274/203856104-d4454636-2f45-4e51-8cf5-a1501398ea57.png">

<br>
<br>
<br>

#
# Este tutorial tem tido muito trabalho, se acharem que tem sido útil ficaria muito grato por ter starred 🌟 para que possa ser partilhado e ajudar mais estudantes. 👨🏻‍🎓❤️
<br>
<br>
<br>


## 9- Guia de correcção ✅

<img width="773" alt="Screen Shot 2023-01-22 at 5 13 44 PM" src="https://user-images.githubusercontent.com/66915274/214894873-b92fcaeb-251b-46fb-8ab8-fb8f861976ab.png">

<img width="772" alt="Screen Shot 2023-01-22 at 5 14 52 PM" src="https://user-images.githubusercontent.com/66915274/214894986-a0697331-8395-4f2b-9acd-50052b5b0f40.png">

<img width="772" alt="Screen Shot 2023-01-22 at 5 15 10 PM" src="https://user-images.githubusercontent.com/66915274/214895053-482efa21-b254-41ca-8239-c5f183a4ff41.png">

<img width="772" alt="Screen Shot 2023-01-22 at 5 15 22 PM" src="https://user-images.githubusercontent.com/66915274/214895097-ec42a53a-b897-4af8-adec-eb99aa6554c8.png">

## 9-1 Respostas de avaliação 💯

### ▪️ O que é uma máquina virtual?

Software que simula um sistema informático e pode executar programas como se fosse um computador real. Permite a criação de múltiplos ambientes simulados ou recursos dedicados a partir de um único sistema de hardware físico. 

### ▪️ Porque escolheu Debian❓

Isto é uma coisa pessoal para todos, a minha opinião: o próprio assunto explica que é mais fácil fazê-lo no Debian e se procurar documentação/tutoriais há muitos e todos eles foram feitos no debian.

### ▪️ Diferenças básicas entre Rocky e Debian

![182516961-c3e4da77-2db8-4737-a68f-27b033908705 (1) (1)](https://user-images.githubusercontent.com/66915274/182517306-edb92eac-cba4-444a-83f8-9692bac69231.png)

### ▪️ Qual é a finalidade das máquinas virtuais❓

Visa fornecer uma plataforma de hardware e um ambiente de execução independente do sistema operativo, que esconde os detalhes da plataforma subjacente e permite que um programa seja sempre executado da mesma forma em qualquer plataforma.

### ▪️ Diferenças entre apt e aptitude ↙️

Aptitude é uma versão melhorada do apt. APT é um gestor de pacotes de nível inferior e aptitude é um gestor de pacotes de nível superior. Outra grande diferença é a funcionalidade oferecida por ambas as ferramentas. O Aptitude oferece uma melhor funcionalidade em comparação com o apt-get. Ambos são capazes de fornecer os meios necessários para efectuar a gestão de pacotes. Contudo, se estiver à procura de uma abordagem mais rica em funcionalidades, o Aptitude deve ser ele.  

### ▪️  O que é APPArmor❓

Um módulo de segurança no kernel do Linux que permite ao administrador do sistema restringir as capacidades de um programa.

### ▪️ O que é LVM❓

É um gestor de volume lógico. Fornece um método de atribuição de espaço em dispositivos de armazenamento de massa, que é mais flexível do que os esquemas convencionais de partição para armazenamento de volumes.

## 9-2 Comandos de avaliação ⌨️

1 ◦ Verificar se não há nenhuma interface gráfica em uso.

Utilize o comando ```ls /usr/bin/*session``` e deverá obter o mesmo resultado que na imagem do ecrã. Se vir algo diferente, estará a utilizar uma interface gráfica.

<img width="352" alt="Screen Shot 2022-11-25 at 12 00 02 AM" src="https://user-images.githubusercontent.com/66915274/203872315-0e87428b-5c5a-475b-9d7c-350eafbe3bea.png">

2 ◦ Verificar se o serviço UFW está a ser utilizado.

```sudo ufw status```

<img width="326" alt="Screen Shot 2022-11-24 at 1 25 06 AM" src="https://user-images.githubusercontent.com/66915274/203668014-bd228793-3532-4494-8b01-d046e4930c10.png">

```sudo service ufw status```

<img width="720" alt="Screen Shot 2022-11-24 at 1 25 37 AM" src="https://user-images.githubusercontent.com/66915274/203668066-6a3420d4-ae72-4263-8474-2e4946e2367a.png">

3 ◦ Verificar se o serviço SSH está a ser utilizado.

```sudo service ssh status```

<img width="711" alt="Screen Shot 2022-11-24 at 1 26 43 AM" src="https://user-images.githubusercontent.com/66915274/203668165-e642c21f-a11e-48b1-bed5-83639445251e.png">

4 ◦ Verifique se está a utilizar o sistema operativo Debian ou Centos.

```uname -v``` o ```uname --kernel-version```

<img width="306" alt="Screen Shot 2022-11-24 at 1 37 17 AM" src="https://user-images.githubusercontent.com/66915274/203669122-0be5033c-c882-4a2e-bf22-6a680f998a56.png">

5 ◦ Verifique se o seu utilizador está nos grupos "sudo" e "user42".

```getent group sudo```

```getent group user42```

<img width="314" alt="Screen Shot 2022-11-24 at 3 26 30 AM" src="https://user-images.githubusercontent.com/66915274/203680444-5fb18ae1-724e-4f78-a77f-a0f5bcc04913.png">

6 ◦ Criar um novo utilizador e mostrar que segue a política de palavra-passe que criámos.

```sudo adduser name_user``` e introduzir uma palavra-passe que siga a política.

<img width="465" alt="Screen Shot 2022-11-24 at 3 29 45 AM" src="https://user-images.githubusercontent.com/66915274/203680847-b4555fd4-f847-4bce-b944-edf3e7720c99.png">

7 ◦ Criamos um novo grupo chamado "evaluating". 

```sudo addgroup evaluating```

<img width="363" alt="Screen Shot 2022-11-24 at 3 30 47 AM" src="https://user-images.githubusercontent.com/66915274/203680980-784b2b60-82f4-405a-9f07-ec4948e86868.png">

8 ◦ Acrescentar o novo utilizador ao novo grupo.

```sudo adduser name_user evaluating```

<img width="411" alt="Screen Shot 2022-11-24 at 3 33 08 AM" src="https://user-images.githubusercontent.com/66915274/203681233-096b200a-2b99-4638-81f3-a3bff046c0db.png">

Para verificar se foi introduzido correctamente.

<img width="356" alt="Screen Shot 2022-11-24 at 3 33 31 AM" src="https://user-images.githubusercontent.com/66915274/203681267-106e4d37-0ec4-4006-95a4-88dd7109c4b6.png">

9 ◦ Verificar se o nome da máquina está correcto para o login42.

<img width="224" alt="Screen Shot 2022-11-24 at 3 37 27 AM" src="https://user-images.githubusercontent.com/66915274/203681701-4f9b9ff1-28b6-4d06-9489-f930eee4b6e5.png">


10 ◦ Modifique o nome de anfitrião para substituir o seu login pelo login do avaliador. Neste caso, substituí-lo-ei por estudante42.

```sudo nano /etc/hostname``` e substituir o nosso login pelo novo.

<img width="445" alt="Screen Shot 2022-11-24 at 3 42 30 AM" src="https://user-images.githubusercontent.com/66915274/203682323-dfd14846-9c98-48d0-9c83-56739de3220b.png">

<img width="525" alt="Screen Shot 2022-11-24 at 3 43 47 AM" src="https://user-images.githubusercontent.com/66915274/203682470-598a9dbf-ef28-4ef5-86cf-8caeef083ec3.png">

```sudo nano /etc/hosts``` e substituir o nosso login pelo novo.

<img width="418" alt="Screen Shot 2022-11-24 at 3 44 08 AM" src="https://user-images.githubusercontent.com/66915274/203682512-5dd1452d-a704-466b-b9e1-89aa472fada6.png">

<img width="512" alt="Screen Shot 2022-11-24 at 3 44 35 AM" src="https://user-images.githubusercontent.com/66915274/203682562-36741000-6203-4a98-9de7-53afb24d6ea2.png">

Reiniciar a máquina.

<img width="358" alt="Screen Shot 2022-11-24 at 3 44 58 AM" src="https://user-images.githubusercontent.com/66915274/203682614-60b10a36-c5d9-478b-a119-73e32a87b7fb.png">

Uma vez que tenhamos entrado novamente no sistema, podemos ver que o nome do anfitrião foi alterado correctamente.

<img width="263" alt="Screen Shot 2022-11-24 at 3 46 30 AM" src="https://user-images.githubusercontent.com/66915274/203682819-bd35ff17-3810-4644-9c44-93957e41d181.png">

11 ◦ Verificar se todas as partições estão como indicado no subject.

```lsblk```

<img width="495" alt="Screen Shot 2022-11-24 at 3 52 17 AM" src="https://user-images.githubusercontent.com/66915274/203683496-b49a7ada-2a0c-4f87-a013-e307370b3900.png">

12 ◦ Verificar se o sudo está instalado.

```which sudo```

<img width="275" alt="Screen Shot 2022-11-24 at 4 00 42 AM" src="https://user-images.githubusercontent.com/66915274/203684520-1340d8dc-1b13-4828-9056-2631e659ddcf.png">

Utilizar o comando which não é realmente uma boa prática, uma vez que nem todos os pacotes são encontrados nos caminhos que são pesquisados, no entanto, para avaliação é melhor, uma vez que é um comando simples e fácil de aprender. Para uma melhor utilização, faremos uso do seguinte comando:

```dpkg -s sudo```

<img width="789" alt="Screen Shot 2022-11-24 at 4 02 13 AM" src="https://user-images.githubusercontent.com/66915274/203684698-d66c3c5b-2d6b-43c5-8f63-1a3cddaf7b4d.png">

13 ◦ Introduzir o novo utilizador no grupo sudo.

```sudo adduser name_user sudo```

<img width="468" alt="Screen Shot 2022-11-24 at 5 02 24 AM" src="https://user-images.githubusercontent.com/66915274/203691378-2f2f5309-e650-486e-9cd6-cae4dec2ffa6.png">

Verificamos se está no grupo.

 <img width="415" alt="Screen Shot 2022-11-24 at 5 02 39 AM" src="https://user-images.githubusercontent.com/66915274/203691402-6b84f333-10f7-4908-8255-652613afeede.png">

14 ◦  Mostra a aplicação das regras impostas ao sudo pelo subject.

<img width="503" alt="Screen Shot 2022-11-24 at 5 12 02 AM" src="https://user-images.githubusercontent.com/66915274/203692615-bc1ec51c-ae5f-444f-9577-39b01112c969.png">

<img width="762" alt="Screen Shot 2022-11-24 at 5 12 17 AM" src="https://user-images.githubusercontent.com/66915274/203692638-e6de6cba-ad42-48b9-ac84-21e2b8c50563.png">

15 ◦ Mostra que o caminho /var/log/sudo/ existe e contém pelo menos um ficheiro, no qual se deve ver um histórico dos comandos utilizados com o sudo.

<img width="295" alt="Screen Shot 2022-11-24 at 5 17 54 AM" src="https://user-images.githubusercontent.com/66915274/203693244-39cb5903-7934-4f8a-8c39-f4ad94d305fb.png">

<img width="643" alt="Screen Shot 2022-11-24 at 5 19 07 AM" src="https://user-images.githubusercontent.com/66915274/203693358-b8a2832e-a80d-4304-b3be-43680ab9ba6d.png">

Executar um comando com sudo e verificar se o ficheiro está actualizado.

<img width="439" alt="Screen Shot 2022-11-24 at 5 23 08 AM" src="https://user-images.githubusercontent.com/66915274/203693791-21697c05-5087-4494-92ed-56ef9680f9fc.png">

<img width="661" alt="Screen Shot 2022-11-24 at 5 23 21 AM" src="https://user-images.githubusercontent.com/66915274/203693816-be7f7b83-d492-4d01-89cf-abff01d07d96.png">

16 ◦ Verificar se o programa UFW está instalado na máquina virtual e verificar se está a funcionar correctamente.

```dpkg -s ufw```

<img width="730" alt="Screen Shot 2022-11-24 at 5 24 47 AM" src="https://user-images.githubusercontent.com/66915274/203693974-9e37e6d4-13a1-45b9-bb0d-03960a072694.png">

```sudo service ufw status```

<img width="704" alt="Screen Shot 2022-11-24 at 5 25 49 AM" src="https://user-images.githubusercontent.com/66915274/203694095-3bcf3a2e-04b8-4d63-a55c-b1e952e52dad.png">

17 ◦ Listar as regras activas na UFW se a parte de bónus não for feita, apenas a regra para a porta 4242 deve aparecer.

```sudo ufw status numbered```

<img width="500" alt="Screen Shot 2022-11-24 at 5 27 50 AM" src="https://user-images.githubusercontent.com/66915274/203694334-08b7791e-c7b6-4325-be60-7dc4e0257411.png">

18 ◦ Criar uma nova regra para o porto 8080. Verifique se foi adicionada às regras activas e depois pode apagá-la.

```sudo ufw allow 8080``` para o criar

<img width="327" alt="Screen Shot 2022-11-24 at 5 31 35 AM" src="https://user-images.githubusercontent.com/66915274/203694718-09ae8097-e636-477d-bdc7-2d45ce892b72.png">

```sudo ufw status numbered```

<img width="473" alt="Screen Shot 2022-11-24 at 5 31 59 AM" src="https://user-images.githubusercontent.com/66915274/203694782-4f70c4a5-0de2-41ea-aba7-b1887e1fd517.png">

Para eliminar a regra, devemos usar o comando ```sudo ufw delete num_rule```

<img width="308" alt="Screen Shot 2022-11-24 at 5 33 15 AM" src="https://user-images.githubusercontent.com/66915274/203694914-82ae09cc-7e96-47db-b5ea-89e496f57db6.png">

Verificamos se foi eliminada e vemos o número da regra seguinte a ser eliminada.

<img width="467" alt="Screen Shot 2022-11-24 at 5 33 41 AM" src="https://user-images.githubusercontent.com/66915274/203694968-623554d2-f9c6-42db-aa34-c3c627b45f8e.png">

Eliminamos novamente a regra.

<img width="308" alt="Screen Shot 2022-11-24 at 5 34 03 AM" src="https://user-images.githubusercontent.com/66915274/203695003-deccc02f-ffc9-445a-a202-48b57cb66545.png">

Verificamos que só nos restam as regras necessárias no assunto.

<img width="461" alt="Screen Shot 2022-11-24 at 5 34 11 AM" src="https://user-images.githubusercontent.com/66915274/203695013-6b9ff40b-d23f-4a95-9694-f4e73e17f252.png">

19 ◦ Verificar se o serviço ssh está instalado na máquina virtual, se funciona correctamente e se só funciona no porto 4242.

```which ssh```

<img width="235" alt="Screen Shot 2022-11-24 at 5 37 25 AM" src="https://user-images.githubusercontent.com/66915274/203695373-c1cf2aca-15d5-4e7d-8c13-6e327824ae2c.png">

```sudo service ssh status```

<img width="616" alt="Screen Shot 2022-11-24 at 5 40 34 AM" src="https://user-images.githubusercontent.com/66915274/203695746-b8a3235d-6084-40c6-8cc0-83e78d0b497c.png">

20 ◦ Utilize ssh para iniciar sessão com o utilizador recém-criado. Certifique-se de que não pode utilizar o ssh com o utilizador de raiz.

Tentamos ligar-nos via ssh com o utilizador raiz, mas não temos permissões.

<img width="1377" alt="Screen Shot 2022-11-24 at 5 44 07 AM" src="https://user-images.githubusercontent.com/66915274/203696165-f1107b33-0c7e-4cce-8d04-56b845637ec8.png">

Ligamo-nos via ssh ao novo utilizador com o comando ```ssh newuser@localhost -p 4242```

<img width="1384" alt="Screen Shot 2022-11-24 at 5 48 06 AM" src="https://user-images.githubusercontent.com/66915274/203696612-f2c98ebf-be55-4830-b5ea-b0ac98de7c65.png">

21 ◦ Modificar o tempo de execução do guião de 10 minutos para 1 minuto.

Executar o seguinte comando para modificar o ficheiro crontab ```sudo crontab -u root -e```

<img width="455" alt="Screen Shot 2022-11-24 at 6 30 57 AM" src="https://user-images.githubusercontent.com/66915274/203701854-956c27de-367f-4b54-b21f-8a892d4891d4.png">

Modificamos o primeiro parâmetro, em vez de 10 alteramo-lo para 1.

<img width="638" alt="Screen Shot 2022-11-24 at 6 31 44 AM" src="https://user-images.githubusercontent.com/66915274/203701944-393bd687-8b9c-4643-9d59-4789361e314d.png">

22 ◦ Finalmente, fazer o guião parar de funcionar quando o servidor tiver começado, mas não modificar o guião.

```sudo /etc/init.d/cron stop```

<img width="483" alt="Screen Shot 2022-11-24 at 3 25 53 PM" src="https://user-images.githubusercontent.com/66915274/203807610-d87124f2-47ca-4546-8037-b904e8bcf5d1.png">

Se quisermos que volte a funcionar:

```sudo /etc/init.d/cron start```

<img width="483" alt="Screen Shot 2022-11-24 at 3 27 38 PM" src="https://user-images.githubusercontent.com/66915274/203807970-8fc69a39-6d10-4e64-9be1-eb49c4bf95f8.png">

## 10- Tester 🆗

Verifique se não deixou nada de fora! Testador próprio para verificar se a instalação e a configuração foram bem sucedidas.

[AQUI](https://github.com/gemartin99/Born2beroot-Tester)

<img width="440" alt="Screen Shot 2023-03-09 at 3 40 54 AM" src="https://user-images.githubusercontent.com/66915274/223902066-f2f6a059-9df8-4e32-a92a-14c43ff8fb0f.png">

# Contacto 📥

### Contacte-me se pensa que posso melhorar o tutorial! Pode ajudar futuros estudantes! 😁

◦ Email: gemartin@student.42barcelona.com

◦ Linkedin: https://www.linkedin.com/in/gemartin99/

# Talvez esteja interessado!

### - Para ver o meu progresso no common core 42 ↙️

[AQUI](https://github.com/gemartin99/42cursus)

### - O meu perfil na intranet 42 ↙️
[AQUI](https://profile.intra.42.fr/users/gemartin)
