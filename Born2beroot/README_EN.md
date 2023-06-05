# Born2beroot-Tutorial 🖥🇬🇧

# Index

1. [Download virtual machine ISO 💿](#1--download-the-virtual-machine-iso-)
2. [Virtual machine installation 🛠](#2--installing-the-virtual-machine-)
3. [Debian installation 🌀](#3--installing-debian-)
4. [Virtual machine setup ⚙️](#4--virtual-machine-setup-%EF%B8%8F)

	4.1 [Installing sudo & configuration of users and groups 👤](#41---installing-sudo--configuration-of-user-and-groups-)
	
	4.2 [Installing & configuring SSH 📶](#42---installing--configuring-ssh-)
	
	4.3 [Installing & configuring UFW 🔥🧱](#43-installing--configuring-ufw-)
	
	4.4 [Setting up the sudo policies 🔒](#44-setting-up-the-sudo-policies-)
	
	4.5 [Setting up the strong password policy 🔑](#45-setting-up-a-strong-password-policy-)
	
	4.6 [Connecting via SSH 🗣](#46-connecting-via-ssh-)
	
5. [Script 🚨](#5--script-)

	5.1 [Total result of the script 🆗](#5-13-total-result-of-the-script)
	
6. [Crontab ⏰](#6--crontab-)
7. [Signature.txt 📝](#7--signaturetxt-)
8. [Bonus ⭐](#8--bonus-%EF%B8%8F)

	8.1 [Manual partition](#81--manual-partition)
	
	8.2 [Wordpress & services configuration 🌐](#82---wordpress--services-configuration-)

	8.3 [Aditional service ➕](#83---aditional-service-)

9. [Correction sheet ✅](#9--correction-sheet-)

	9.1 [Evaluation answers 💯](#91-evaluation-answers-)

	9.2 [Evaluation commands ⌨️](#9-2-evaluation-commands-%EF%B8%8F)

10. [Tester 🆗](#10--tester-)

## 1- _Download the virtual machine ISO_ 💿

[CLICK HERE](https://www.debian.org/download.en.html) for the URL of the debian ISO. Ths is a direct link to debian.org/download.

## 2- _Installing the virtual machine_ 🛠

A virtualization software is required to perform the installation. In this tutorial we will use [Virtual Box](https://www.virtualbox.org/). If you already have installed this software and you have the Debian ISO we can proceed.

1 ◦ We need to open VirtualBox and click ```New```

<img width="836" alt="Captura de pantalla 2022-07-13 a las 18 02 05" src="https://user-images.githubusercontent.com/66915274/178779265-38eade6e-2789-4597-89e9-5beca2d3921a.png">

2 ◦ We must choose a name for the machine and the folder which will locate it. **IMPORTANT** Store the machine created inside the sgoinfre folder located in your campus server; this is important because we will run out of memory space in our session and the installation will fail. (Ask your staff if you can't find it)

<img width="928" alt="Screen Shot 2022-10-23 at 2 57 11 PM" src="https://user-images.githubusercontent.com/66915274/197393458-dda8da5f-2362-4d36-b740-0951ebf03d3c.png">

3 ◦ Select the total RAM memory which we will reserve for the machine.

<img width="685" alt="Captura de pantalla 2022-07-13 a las 13 06 05" src="https://user-images.githubusercontent.com/66915274/178781098-8aa07fbc-e1d2-4bee-8021-ddf052880364.png">

4 ◦ Select the second option so we can create a virtual disk now.

<img width="826" alt="Captura de pantalla 2022-07-13 a las 18 13 24" src="https://user-images.githubusercontent.com/66915274/178781390-289236e0-1732-4dd8-8d3d-34eb0a229a18.png">

5 ◦ Choose the first option ```VDI``` since we downloaded a ISO.

<img width="829" alt="Captura de pantalla 2022-07-13 a las 18 16 35" src="https://user-images.githubusercontent.com/66915274/178781999-a42c3c6c-bc1e-4ad5-8bc5-b4b3f811c3f2.png">

6 ◦ Select the first option ```Dynamically allocated``` so it will allocate the memory of the fisical machine as it feels necessary while using the virtual machine until we reach the available limit.

<img width="833" alt="Captura de pantalla 2022-07-13 a las 18 19 33" src="https://user-images.githubusercontent.com/66915274/178782529-fb309739-3169-4e20-b3e1-23d17a122a18.png">

7 ◦ One we established the recommended ```12 GB``` we must click on ```Create```. If we are doing the bonus we might set ```30 GB```.

<img width="835" alt="Captura de pantalla 2022-07-13 a las 18 25 20" src="https://user-images.githubusercontent.com/66915274/178783666-4fa624a3-9c38-4c45-b6a8-d476c2864200.png">

8 ◦ It might seem that we have already finish the installation , but there's still some steps to do. Click on ```Settings```.

<img width="831" alt="Captura de pantalla 2022-07-13 a las 18 30 46" src="https://user-images.githubusercontent.com/66915274/178784822-38228e96-ca37-4cc0-b3ca-551829e4c8c8.png">

9 ◦ Now click on ```Storage``` , again click on the 💿 that we find on the right and click on ```Choose a disk file```.

<img width="962" alt="Captura de pantalla 2022-07-13 a las 18 33 28" src="https://user-images.githubusercontent.com/66915274/178785148-2904cf4f-93c0-4866-a5d6-778390bddeb7.png">

10 ◦ Select the ISO that we just downloaded and click ```Open```, then click on ```Ok```. 

<img width="790" alt="Captura de pantalla 2022-07-13 a las 18 38 39" src="https://user-images.githubusercontent.com/66915274/178786115-24f93fde-bc01-4e60-bf8d-20d7a5ae83be.png">

11. ◦ Once all this steps have been completed we can ```Start``` our new virtual machine.

<img width="833" alt="Captura de pantalla 2022-07-13 a las 18 44 55" src="https://user-images.githubusercontent.com/66915274/178787317-aab80b53-8244-4ede-9c75-11fcf4efdd1c.png">

## 3- Installing Debian 🌀

➤ **You there, wait**❗️ Your eyesight is important 👀❗️ Making the window bigger will help: 

<img width="666" alt="Captura de pantalla 2022-07-13 a las 18 51 41" src="https://user-images.githubusercontent.com/66915274/178788620-61064b58-0c0c-4f48-815e-60b4a8eaecae.png">

Use the ```command``` key so the machine capture your mouse and vice versa.

### Now we proceed 🛠

1 ◦ We will choose the version without graphic interface ```Install``` size the subject says so. Any time we want to confirm something ```Enter key``` must be pressed, and the ```Arrow keys``` must be used any time to move around.

<img width="632" alt="Captura de pantalla 2022-07-13 a las 18 58 48" src="https://user-images.githubusercontent.com/66915274/178789643-e987c6d0-5b6f-4b98-ad4a-5c092a352183.png">

2 ◦ Now lenguage must be choosed for the machine that will be present during the installation and the default setting. Select ```English```.  

<img width="794" alt="Captura de pantalla 2022-07-13 a las 19 00 41" src="https://user-images.githubusercontent.com/66915274/178789949-4fe83ac8-23b8-4f82-a034-a6d5e81d4f17.png">

3 ◦ It's time to select the country. If yours no on the pressent list go to ```Other```.

<img width="791" alt="Captura de pantalla 2022-07-13 a las 19 07 50" src="https://user-images.githubusercontent.com/66915274/178791067-44230a4c-e647-46cb-9d6f-bc441bf0227b.png">

4 ◦ Time to select continent. In our case we will select ```Europe``` 🇪🇺. 

<img width="797" alt="Captura de pantalla 2022-07-13 a las 19 09 58" src="https://user-images.githubusercontent.com/66915274/178791387-78171f90-2834-42ab-aedb-9cf900d0ecd5.png">

5 ◦ Now select the country. In our case we will select ```Spain``` 🇪🇸.

<img width="793" alt="Captura de pantalla 2022-07-13 a las 19 12 01" src="https://user-images.githubusercontent.com/66915274/178791824-7a34813c-eae9-4b5c-9873-cea158229e07.png">

6 ◦ Choose ```United States```.

<img width="792" alt="Captura de pantalla 2022-07-13 a las 19 13 43" src="https://user-images.githubusercontent.com/66915274/178792054-4e72dfdd-8175-48f9-a06d-f2696fa752e3.png">

7 ◦ This time it's turn for selecting a keymap. Our keyboard follows the ANSI standard so ```American English```. If you don't know what keyboard standard is yours we higly recommend you to ask your staff.

<img width="793" alt="Captura de pantalla 2022-07-13 a las 19 02 21" src="https://user-images.githubusercontent.com/66915274/178790230-d2571d4f-a546-4b43-bd44-c6a591d92d72.png">

8 ◦ Now we must set a ```Host Name``` of the machine, which must be your login followed by a 42.

<img width="792" alt="Captura de pantalla 2022-07-13 a las 19 17 23" src="https://user-images.githubusercontent.com/66915274/178792607-1cc585eb-ae32-4b2c-97fd-4fcf5bad4262.png">

9 ◦ This section will be left blank since the subject doesn't requiere it.

<img width="792" alt="Captura de pantalla 2022-07-13 a las 19 20 29" src="https://user-images.githubusercontent.com/66915274/178793113-b0934aac-fac4-4844-8412-aca124038fd0.png">

10 ◦ We have to set a password for the root user. **IMPORTANT** Save this password since we need to use the root user. If you want to check the password is correct, try going to *Show Pawssword in Clear* and then press the ```Space bar```.

<img width="794" alt="Captura de pantalla 2022-07-13 a las 19 21 29" src="https://user-images.githubusercontent.com/66915274/178793296-c2c3b6c5-9744-4ba8-ac32-8e3c21c44f9b.png">

11 ◦ Repeat the process as you need to confirm the password we just set.

<img width="796" alt="Captura de pantalla 2022-07-13 a las 19 24 53" src="https://user-images.githubusercontent.com/66915274/178793903-2ea7c623-7175-4c27-98bf-85c8c1b359db.png">

12 ◦ Set up the user name. As is in the subject, we need a new user that isn't the root user, and the name for that user have to be your student login.

<img width="794" alt="Captura de pantalla 2022-07-13 a las 19 26 20" src="https://user-images.githubusercontent.com/66915274/178794178-901f7951-a978-458d-a925-4586026784f7.png">

Repeat you user name.

![image](https://user-images.githubusercontent.com/66915274/182679675-4d3805a9-34c9-4ba3-9488-1a7fe30f2519.png)


13 ◦ And now we have to set our new user password. Just as before, repeat te process; save this password too because it will be used later.

<img width="790" alt="Captura de pantalla 2022-07-13 a las 19 30 08" src="https://user-images.githubusercontent.com/66915274/178794862-94de8c7a-282e-4a83-9903-d3b8439122ea.png">

14 ◦ Select your time zone.

<img width="796" alt="Captura de pantalla 2022-07-13 a las 19 31 41" src="https://user-images.githubusercontent.com/66915274/178795105-956854e1-deff-4851-8eba-26cdefb1e06f.png">

15 ◦ Select ```Guied - use entire disk and set up encrypted LVM```. ⚠️❗️ **If you want to do the bonus select ```Manual``` and then [click here](#8--bonus-%EF%B8%8F)** ❗️⚠️

<img width="796" alt="Captura de pantalla 2022-07-13 a las 19 33 13" src="https://user-images.githubusercontent.com/66915274/178795367-b82018de-edc8-47d3-8cd6-b90c5e3be2fa.png">

16 ◦ We choose the disk wich we wish to create the partition (it only have to show one disk).

<img width="789" alt="Captura de pantalla 2022-07-13 a las 19 40 03" src="https://user-images.githubusercontent.com/66915274/178796481-29ef7ebc-0518-40f0-9429-3f43316b35d3.png">

17 ◦ Once we choosed the disk we must make the partition as is in the subject. To do it properly we select the second option ```Separate /home partition```.

<img width="787" alt="Screen Shot 2023-03-08 at 1 44 16 PM" src="https://user-images.githubusercontent.com/66915274/223716446-9ffb6f66-1ad3-4bfe-81ce-1f297bed0ede.png">

18 ◦ We choose option ```Yes``` so the changes will be writen in the disk and so we can set the logical volume manager (LVM).

<img width="777" alt="Captura de pantalla 2022-07-13 a las 19 44 30" src="https://user-images.githubusercontent.com/66915274/178797258-8c34bc31-16a7-4aef-8406-cecc21fdf028.png">

19 ◦ We click on ```Cancel```; the erasing of the data is not required. 

<img width="782" alt="Captura de pantalla 2022-07-13 a las 19 46 45" src="https://user-images.githubusercontent.com/66915274/178797666-78cdf892-1a83-4c68-8f85-0d5440cd4854.png">

20 ◦ Again, we must choose desired password for the LVM encrypt. As is mention before we must repite the process and I advice you to write it down.

<img width="777" alt="Captura de pantalla 2022-07-13 a las 19 51 17" src="https://user-images.githubusercontent.com/66915274/178798491-4c9b4a0c-d698-47c7-9579-10b16aa47275.png">

21 ◦ In this step we must input the required amount of volume group to use during the guided partitioning. We can write down ```max``` or the total avalaible memory, in this case being ```12.4 GB```.

<img width="794" alt="Captura de pantalla 2022-07-13 a las 19 55 02" src="https://user-images.githubusercontent.com/66915274/178799165-c6b05fd2-86ad-45b7-a026-9ee169eda5d5.png">

22 ◦ To wrap the partitioning and write the changes in the disk we choose the option ```Finish partitioning and write changes to disk```.

<img width="789" alt="Screen Shot 2023-03-08 at 1 46 17 PM" src="https://user-images.githubusercontent.com/66915274/223716909-c20cea01-950f-49cd-9ce6-99ec0eab0ea4.png">

23 ◦ We choose the option ```Yes``` and then we confirm that we do not want more changes.

<img width="770" alt="Screen Shot 2023-03-08 at 1 46 52 PM" src="https://user-images.githubusercontent.com/66915274/223716940-b2e29ee7-3c98-434e-bccd-ac21d72eda2d.png">

24 ◦ We select the option ```No``` as is not required addicional packages.

<img width="770" alt="Captura de pantalla 2022-07-13 a las 20 05 42" src="https://user-images.githubusercontent.com/66915274/178801099-2dda24f5-0d46-4184-8c44-a8fe0bf46527.png">

25 ◦ We choose our Country.

<img width="756" alt="Captura de pantalla 2022-07-13 a las 20 14 23" src="https://user-images.githubusercontent.com/66915274/178802653-d9e8504a-b60b-4441-8ee3-8d48ca4a6bf0.png">

26 ◦ We choose ```deb.debian.org``` as is the recommended by debian itself.

<img width="792" alt="Captura de pantalla 2022-07-13 a las 20 15 00" src="https://user-images.githubusercontent.com/66915274/178802772-4f67cd99-60d5-4439-8502-317e81e07d70.png">

27 ◦ We will left this option blank and we click on ```Continue```.

<img width="797" alt="Captura de pantalla 2022-07-13 a las 20 17 24" src="https://user-images.githubusercontent.com/66915274/178803208-2969acae-3fa7-423e-8a3c-bb7c76eff824.png">

28 ◦ We select the option ```No``` as we want to remain out of the stadistics.

<img width="796" alt="Captura de pantalla 2022-07-13 a las 20 21 54" src="https://user-images.githubusercontent.com/66915274/178803926-a4efbc70-f3e2-4e6c-9809-9152478d8237.png">

29 ◦ We will left in blank all software choises (with the space bar) and click on ```Continue```.

<img width="797" alt="Captura de pantalla 2022-07-13 a las 20 24 17" src="https://user-images.githubusercontent.com/66915274/178804377-e775b89e-93d4-482f-a4d0-0ef126f47719.png">

30 ◦ We select ```Yes``` for install [GRUB boot](https://es.wikipedia.org/wiki/GNU_GRUB) in the hard disk.

<img width="792" alt="Captura de pantalla 2022-07-13 a las 20 26 24" src="https://user-images.githubusercontent.com/66915274/178804771-ba16e0b7-9f06-4c5b-9451-0bfd65efd2bb.png">

31 ◦ We will choose the device ```/dev/sda (ata_VBOX_HARDDISK)``` for the installation for boot loader.

<img width="792" alt="Captura de pantalla 2022-07-13 a las 20 35 46" src="https://user-images.githubusercontent.com/66915274/178806441-f1bf3159-4e09-4c9a-9102-b3261c9000d8.png">

32 ◦ To finish the installation we click on ```Continue```. 

<img width="794" alt="Captura de pantalla 2022-07-13 a las 20 39 30" src="https://user-images.githubusercontent.com/66915274/178807102-e2a9722e-791f-48a0-ae35-b05b36a37ed2.png">

## 4- Virtual machine setup ⚙️

➤ First of all, we must select ```Debian GNU/Linux```.

➤ Now we must introduce the encryptation password that we previously set. In my case ```Hello42bcn```.

<img width="714" alt="Captura de pantalla 2022-07-13 a las 20 47 26" src="https://user-images.githubusercontent.com/66915274/178808699-f1024129-5f90-41d0-a9a8-4806f5bc114b.png">

➤ After that we must introduce the user and password that we created. In my case the user is ```gemartin``` and the password is ```Hola42spain```.

<img width="798" alt="Captura de pantalla 2022-07-13 a las 20 48 38" src="https://user-images.githubusercontent.com/66915274/178808994-664025ac-36df-4332-8e44-505ecd2ca305.png">

### We have set everything ready for starting the setup of our Debian virtual machine❗️

### 4.1 - Installing sudo & configuration of user and groups 👤

1 ◦ The beginning of the installation starts with changing user to root so we can install sudo, for this purpouse we write ```su``` in the bash prompt and introduce the root password, in my case ```Hola42bcn```. Once we are done we write down the command ```apt install sudo``` so the package manager install the required packages for sudo.

<img width="796" alt="Captura de pantalla 2022-07-14 a las 1 36 46" src="https://user-images.githubusercontent.com/66915274/178855273-fc76689c-224b-4368-b7b1-5d1954427aff.png"> 

2 ◦ We must reboot machine so the changes can be applied. For that porpouse we will use the commando ```sudo reboot```.

<img width="514" alt="Captura de pantalla 2022-07-14 a las 2 02 24" src="https://user-images.githubusercontent.com/66915274/178857108-a51988e1-084c-498c-86c6-98ab5a3b1305.png">

3 ◦ Once the machine is rebooted we have to input the encryptation password and the login again. To check if sudo have been installed correctly we must switch to root user and then use the command ```sudo -V```; this command will show the sudo version (it will show extra info like the plugins installed). **OPTIONAL** ➤ In case of the output being too large we can redirect the command output to a file via ```sudo -V > file.txt``` and then edit the file using ```nano file.txt```. Other option would be putting ```| more``` after the command.

<img width="799" alt="Captura de pantalla 2022-07-14 a las 2 09 59" src="https://user-images.githubusercontent.com/66915274/178857742-96356272-abd6-44c4-a3e6-5e8b9f471146.png">

4 ◦ **Now, this step is for the everyone that didn't put his user as the other user asked by the subject during the installation of the system.** Still in the root user we will create an aditional user with ```sudo adduser <login>```. If you had already done it will show the same message as is the image.

<img width="509" alt="Captura de pantalla 2022-07-14 a las 2 15 11" src="https://user-images.githubusercontent.com/66915274/178858240-95ce2a2b-004a-4bcb-981a-7990c1cc4fdd.png">

5 ◦ We will create a new group called ```user42```. For that we must use ```sudo addgroup user42```.

<img width="367" alt="Screen Shot 2022-10-26 at 6 30 52 PM" src="https://user-images.githubusercontent.com/66915274/198082677-d393243e-363a-4d1f-95d8-a6695336a47a.png">

🧠 <b>What is GID❓</b> It's the group identifier, in short, Group 🆔.

🤔 <b> Was the group created without problems? </b> Truth is that there is no sign of one, still we can check it using ```getent group <groupname>``` or we can also use ```cat /etc/group``` and see all groups and the users in any of them.

6 ◦ With ```sudo adduser <user> <groupname>``` we can include a user to a group. We mst include out user in the groups ```sudo``` and ```user42```.

<img width="422" alt="Screen Shot 2022-10-26 at 6 32 30 PM" src="https://user-images.githubusercontent.com/66915274/198083019-c5a442bb-c625-45ce-84e1-bcbca3a7dba5.png">

<img width="404" alt="Screen Shot 2022-10-26 at 6 34 09 PM" src="https://user-images.githubusercontent.com/66915274/198083377-bd4162c6-317b-474f-8bc4-e542be4dcfde.png">

7 ◦ Once we are done with that we can check it using ```getent group <groupname>``` or editing the /etc/group file using ```nano /etc/group```; the groups ```sudo``` and ```user42``` must be present with our user.

<img width="328" alt="Screen Shot 2022-10-26 at 6 35 50 PM" src="https://user-images.githubusercontent.com/66915274/198083739-ad16e388-69c3-41d1-a061-e55dd66b0d14.png">

<img width="151" alt="Screen Shot 2022-10-26 at 6 36 18 PM" src="https://user-images.githubusercontent.com/66915274/198083854-0fba5296-a49f-44cc-8427-59a692e69288.png">

<img width="353" alt="Screen Shot 2022-10-26 at 6 39 22 PM" src="https://user-images.githubusercontent.com/66915274/198084464-f73352ee-ed21-478b-a44d-d86eb6d8a1cd.png">

<img width="183" alt="Screen Shot 2022-10-26 at 6 38 25 PM" src="https://user-images.githubusercontent.com/66915274/198084311-45a50162-ff89-4e7d-a3c5-45e7048520a4.png">

### 4.2 - Installing & configuring SSH 📶

🧠 <b> What is SSH❓</b> The acronym SSH stands for "Secure Shell." The SSH protocol was designed as a secure alternative to unsecured remote shell protocols. It utilizes a client-server paradigm, in which clients and servers communicate via a secure channel.

1 ◦ First thing, we should update the system using ```sudo apt update```.

<img width="774" alt="Captura de pantalla 2022-07-14 a las 3 09 44" src="https://user-images.githubusercontent.com/66915274/178864173-aa5a08cf-8562-4484-a60a-3e1c7a533a28.png">

2 ◦ Following up we will install the main tool for remote access with the SSH protocol, using OpenSSH. The installation requieres the package ```sudo apt install openssh-server```. When we are asked for confirmation we will write ```y```, and just then the installation will proceed.

<img width="772" alt="Captura de pantalla 2022-07-14 a las 3 14 52" src="https://user-images.githubusercontent.com/66915274/178865991-cdb90f12-ebd8-4583-bcbb-70f47c86abe6.png">

Anywan curious that the installation have been realices without problems we can use ```sudo service ssh status``` and it will show how is the state of it. **Active** must be show to continue.

<img width="702" alt="Captura de pantalla 2022-07-14 a las 3 53 59" src="https://user-images.githubusercontent.com/66915274/178876938-7fd74214-15df-4759-bf8d-52b53a8f4251.png">

3 ◦ Going on, some files have been created and we need to configur them. For that we will use [Nano](https://en.wikipedia.org/wiki/GNU_Nano) or [VIM](https://en.wikipedia.org/wiki/Vim_(text_editor)) (we will need to install vim since it's not preinstalled using ```sudo apt install vim```) or any other text editor. First file that we will edit will be ```/etc/ssh/sshd_config```. If you are not on root you will not be able to edit the file; as you know, for switching to root we use ```su```.

<img width="497" alt="Captura de pantalla 2022-07-14 a las 3 24 21" src="https://user-images.githubusercontent.com/66915274/178867150-273c75c1-c935-45f0-a551-1a115d3f6f6a.png">

4 ◦ The ```#``` means that line it is commented; the lines that we will be edit have to be uncommented. Once we are editing the  file we need to update the following lines:

➤ #Port 22 -> Port 4242

<img width="807" alt="Captura de pantalla 2022-07-14 a las 3 31 04" src="https://user-images.githubusercontent.com/66915274/178867929-0f8be11e-d0ca-4445-af05-a693d01411bd.png">

➤ #PermitRootLogin prohibit-password -> PermitRootLogin no

<img width="798" alt="Captura de pantalla 2022-07-14 a las 3 34 13" src="https://user-images.githubusercontent.com/66915274/178868266-fc6d6684-8196-4021-b884-a047a443a3ec.png">

When finish we have to save the changes and leave the file.

5 ◦ Now with the file ```/etc/ssh/ssh_config```. (not ```sshd_config```)

<img width="501" alt="Captura de pantalla 2022-07-14 a las 3 48 56" src="https://user-images.githubusercontent.com/66915274/178872582-8277e687-8ab7-4087-bd17-a71e5e86d5e6.png">

Edit the following line: 

➤ #Port 22 -> Port 4242

<img width="795" alt="Captura de pantalla 2022-07-14 a las 3 50 29" src="https://user-images.githubusercontent.com/66915274/178875013-1969c13f-9e43-4f2a-a037-f384a8e87a78.png">

6 ◦ Finally we must restart the ssh service so it can be updated. For that purpuse we will use ```sudo service ssh restart``` and once it is done we will check the service state with ```sudo service ssh status``` and confirm that everything is alright.

<img width="713" alt="Captura de pantalla 2022-07-14 a las 3 56 56" src="https://user-images.githubusercontent.com/66915274/178880333-0e2ad7fd-674b-4b4f-b92a-25acbc36c8a5.png">


### 4.3 Installing & configuring UFW 🔥🧱

🧠 <b>What is [UFW](https://en.wikipedia.org/wiki/Uncomplicated_Firewall)❓</b> It is a [firewall](https://en.wikipedia.org/wiki/Firewall_(computing)) which use the command line for setting up [iptables](https://en.wikipedia.org/wiki/Iptables) using a small number of easy commands.

1 ◦ First things first, we need to install the packages for UFW, for that we will use ```sudo apt install ufw```, then when we are asked for confirmation type ```y``` and the installation will proceed

<img width="771" alt="Captura de pantalla 2022-07-14 a las 19 28 55" src="https://user-images.githubusercontent.com/66915274/179045920-4a9aec64-b1d7-4785-89a1-4a299aae21a3.png">

<img width="802" alt="Captura de pantalla 2022-07-14 a las 19 29 25" src="https://user-images.githubusercontent.com/66915274/179045994-19cdf6e0-be61-454b-9adc-ba1f9c2dfd84.png">

2 ◦ When we are done with it, we want to start it using the command ```sudo ufw enable``` and then it have to show us the the *firewall is ative.*

<img width="498" alt="Captura de pantalla 2022-07-14 a las 19 32 57" src="https://user-images.githubusercontent.com/66915274/179046565-307c042b-243e-4224-bcb2-d02859332352.png">

3 ◦ Then we must allow our firewall to accept the connections that will happens in the 4242 port. What we will do is use ```sudo ufw allow 4242```. 

<img width="514" alt="Captura de pantalla 2022-07-14 a las 19 34 12" src="https://user-images.githubusercontent.com/66915274/179046765-5277ec55-b8e4-4d4f-a617-a2a8758b80a8.png">

4 ◦ Lastly we will check if everything done here is correct checking the actual state of our firewall. For that we will use ```sudo ufw status```. Alternatively ```sudo ufw status verbose``` or ```sudo ufw status numbered``` can be used.

<img width="575" alt="Captura de pantalla 2022-07-14 a las 19 38 37" src="https://user-images.githubusercontent.com/66915274/179047574-8073045c-6e78-4b6f-8487-cb0f490a2cd0.png">

### 4.4 Setting up the sudo policies 🔒

1 ◦ Begining with this section, we will create a file in */etc/sudoerd.d/*. The file will serve the purpouse of storing our sudo policy. The command that we will use will be ```touch /etc/sudoers.d/sudo_config```.

<img width="511" alt="Captura de pantalla 2022-07-14 a las 22 00 40" src="https://user-images.githubusercontent.com/66915274/179072822-2f86bd8b-216e-45e4-a15b-8fe3a49149ff.png">

2 ◦ Then we must create a directory as is asked in the subject in */var/log/* because each commands need to be logged, the input and output. We will use ```mkdir /var/log/sudo``` for our folder.

<img width="502" alt="Captura de pantalla 2022-07-14 a las 21 56 53" src="https://user-images.githubusercontent.com/66915274/179072210-ad99e50d-fa57-494b-999d-3a80dd0f7849.png">

3 ◦ We must edit the file that we created in the first step of this section. Use any text editor, but for this guide as is in every screenshot we will use nano. Use ```nano /etc/sudoers.d/sudo_config```.

<img width="502" alt="Captura de pantalla 2022-07-14 a las 22 04 10" src="https://user-images.githubusercontent.com/66915274/179073389-5b2a9c16-811c-4133-87c6-479e770c880b.png">

4 ◦ Once we are editing the file we must set it up with the following commands.

```
Defaults  passwd_tries=3
Defaults  badpass_message="Mensaje de error personalizado"
Defaults  logfile="/var/log/sudo/sudo_config"
Defaults  log_input, log_output
Defaults  iolog_dir="/var/log/sudo"
Defaults  requiretty
Defaults  secure_path="/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin:/snap/bin"
```

➤ As it should be on the file.

<img width="1202" alt="Captura de pantalla 2022-07-16 a las 2 03 45" src="https://user-images.githubusercontent.com/66915274/179326003-1fd67295-4be2-47bd-98fc-d5821f5f1c4d.png">

🤔 <b>What does each command❓ </b>

![F5B5BED3-C144-4EDF-91AB-226533DD5B18_4_5005_c](https://user-images.githubusercontent.com/66915274/211846396-e3212104-b8ce-412c-ac1a-e4d3124dfba8.jpeg)

🟩 **GREEN**	-> Total tries for entering the sudo password.

🟥 **RED**		-> The message that will show when the password failed.

🟨 **YELLOW**	-> Path where will the sudo logs will be stored.

🟦 **BLUE**	-> What will be logged.

🟫 **BROWN**	-> TTY is required lol.

🟪 **PURPLE**	-> Folders that will be excluded of sudo

### 4.5 Setting up a strong password policy 🔑

1 ◦ First step will be editing the login.defs file.

<img width="493" alt="Captura de pantalla 2022-07-16 a las 2 54 06" src="https://user-images.githubusercontent.com/66915274/179327943-67432d4a-7042-44ea-96f4-5975556ce4dc.png">

2 ◦ Once we are done editing the file, we will set the next parameters:

➤ PASS_MAX_DAYS 99999 -> PASS_MAX_DAYS 30

➤ PASS_MIN_DAYS 0 -> PASS_MIN_DAYS 2


<img width="802" alt="Captura de pantalla 2022-07-16 a las 3 05 49" src="https://user-images.githubusercontent.com/66915274/179328449-32a40f67-a18d-4f29-993b-94d013cd7670.png">

PASS_MAX_DAYS: It's the max days till password expiration.

PASS_MIN_DAYS: It's the min days till password change.

PASS_WARN_AGE: It's the days till password warning.

3 ◦ For continuing the installation we must install the next packages with the following command```sudo apt install libpam-pwquality``` , then we wrute ```Y``` so we can continue; we wait till it finish.

<img width="770" alt="Captura de pantalla 2022-07-16 a las 3 13 52" src="https://user-images.githubusercontent.com/66915274/179328708-c5054703-bdb0-4cca-82a8-6ab25ce42b40.png">

4 ◦ Next thing we must do is is edit a file and change itś content. We will use ```nano /etc/pam.d/common-password```. 

<img width="500" alt="Captura de pantalla 2022-07-16 a las 3 27 02" src="https://user-images.githubusercontent.com/66915274/179329260-0e18bd27-a522-4c7c-86bf-21823eee0f8b.png">

5 ◦ After retry=3 we must add the following commands:

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
➤ This is how the line must be↙️

<img width="1127" alt="Captura de pantalla 2022-07-16 a las 3 34 33" src="https://user-images.githubusercontent.com/66915274/179329511-0619183a-8ccc-456b-8f27-3962fc542cc3.png">

➤ This is how the file must look ↙️

<img width="800" alt="Captura de pantalla 2022-07-16 a las 3 38 08" src="https://user-images.githubusercontent.com/66915274/179329787-1b718843-9272-43e4-8d92-8d83933cc938.png">

🤔 <b>What does each command❓</b>

minlen=10 ➤ The minimun characters a password must contain.

ucredit=-1 ➤ The password at least have to contain a capital letter. We must write it with a - sign, as is how it knows that's refering to minumum caracters; if we put a + sign it will refer to maximum characters.

dcredit=-1 ➤ The passworld at least have to containt a digit.

lcredit=-1 ➤ The password at least have to contain a lowercase letter.

maxrepeat=3 ➤ The password can not have the same character repited three contiusly times.

reject_username ➤ The password can not contain the username inside itself.

difok=7 ➤ The password it have to containt at least seven diferent characters from the last password ussed. 

enforce_for_root ➤ We will implement this password policy to root.

### 4.6 Connecting via SSH 🗣

1 ◦ If we want to connect via SSH we must close the machine and go to settings.

<img width="832" alt="Captura de pantalla 2022-07-18 a las 10 15 13" src="https://user-images.githubusercontent.com/66915274/179470948-d9a863ef-f1a3-41fb-a103-25378064e747.png">

2 ◦ Once there we will click on ```Network```, click on ```Advanced``` so it shows more options, then we click on ```Port fowarding```.

<img width="684" alt="Captura de pantalla 2022-07-18 a las 10 18 32" src="https://user-images.githubusercontent.com/66915274/179471690-cfbdbf4b-ab93-4b12-9504-2482712652a3.png">

3 ◦ Click on the emoji for adding a new rule.

<img width="585" alt="Captura de pantalla 2022-07-18 a las 10 21 24" src="https://user-images.githubusercontent.com/66915274/179471855-913a684d-c7b0-43e2-9e01-d2c954fe75a4.png">

4 ◦ Lastly we will add the ```4242``` port to host and client. The IP's are not required. We will click accept so changes can be saved.

<img width="588" alt="Captura de pantalla 2022-07-18 a las 10 22 29" src="https://user-images.githubusercontent.com/66915274/179472105-5942b3ec-5c29-4d49-a00e-67f9cde289e8.png">

➤ To connect via ssh from the machine to the virstual machine using and the use the command ```ssh <user>@localhost -p 4242```; it will ask for the password of the user that we are trying to log in. Once the password is introduced it will show or login in green, that will mean that the connections has been successfully.

<img width="517" alt="Screen Shot 2022-10-27 at 12 40 23 AM" src="https://user-images.githubusercontent.com/66915274/198174777-28f7793b-273b-43ce-b1c2-4a890353cb8c.png">

<img width="566" alt="Screen Shot 2022-10-27 at 12 40 04 AM" src="https://user-images.githubusercontent.com/66915274/198174814-c1873c62-41dd-4c1d-ad2d-f268b2da0e4c.png">

## 5- Script 🚨

Going into this part, you need to take special atention to everything, as is important to learn all that is here. **Do not cheat this part!** You will be asked how the script works during the evaluation, or as the evaluator sees.

🧠 <b> What is a script❓</b> It is a sequence of commands stored in a file that when executed will do the function of each command.

### 5-1 Architecture 

For the architecture of the SO to be shown, you will use the command ```uname -a``` ("-a" == "--all"). What this command does is print all information, except if the CPU is unknow or the platform hardware.

<img width="715" alt="Screen Shot 2022-10-27 at 4 50 06 PM" src="https://user-images.githubusercontent.com/66915274/198322524-8c2d305f-bfe8-4e4a-bf31-6a883af71ad3.png">

### 5-2 Physical Cores

For the number of fisical cores to be shown we will use the file /proc/cpuinfo, which give us information about the CPU: its type, brand, model, performance, etc. We will use ```grep "physical id" /proc/cpuinfo | wc -l``` with the command grep looking inside the file "physical id" and with wc -l to count the line of the grep output. 

<img width="596" alt="Screen Shot 2022-10-27 at 4 50 49 PM" src="https://user-images.githubusercontent.com/66915274/198322799-4bf2131e-7fba-4c9e-8d1b-bb9cc1b89e76.png">

### 5-3 Virtual Cores

To show the number of virtual cores is very similar to the previous one. We will again use the file /proc/cpuinfo, but in this case we will use the command ```grep processor /proc/cpuinfo | wc -l```. The usage is practically the same as before, only that instead of counting the lines of "physical id" we will do it with "processor". We do it this way for the same reason as before, the way of quantifying marks 0 if there is a processor.

<img width="586" alt="Screen Shot 2022-10-27 at 4 55 48 PM" src="https://user-images.githubusercontent.com/66915274/198324254-3d0f247d-b767-4e02-9e69-11b4e0586280.png">


### 5-4 RAM

To show the RAM memory we will use the command ```free``` to see at the moment information about the RAM, the used part, free, reserved for other resources, etc. For more info about the command we will put free --help. We will use free --mega since that unit of measure appears in the subject.

<img width="672" alt="Captura de pantalla 2022-08-02 a las 2 46 10" src="https://user-images.githubusercontent.com/66915274/182268241-86b743bb-653d-4fef-acda-e7bfa59e38d7.png">

Once we have run this command, we must filter our search since we do not need all the information that it provides. The first thing we need to show is the used memory, for which we will use the command ```awk```, which processes data based on text files, that is, we can use the data that interests us from a file. Finally, what we will do is compare if the first word of a row is equal to "Mem:" we will print the third word of that row, which will be the used memory. The whole command together would be ```free --mega | awk '$1 == "Mem:" {print $3}'```. In the script the return value of this command will be assigned to a variable that will be concatenated with other variables so that everything is the same as specified in the subject.

<img width="621" alt="Captura de pantalla 2022-08-02 a las 2 55 21" src="https://user-images.githubusercontent.com/66915274/182269019-d5bb3107-f091-491f-a4ab-27edd357aec8.png">

To obtain the total memory, the command is practically the same as the previous one, the only thing we must change is that instead of printing the third word of the row, we want the second one ```free --mega | awk '$1 == "Mem:" {print $2}'```.

<img width="605" alt="Captura de pantalla 2022-08-02 a las 3 00 02" src="https://user-images.githubusercontent.com/66915274/182269450-318816e1-fc71-48b0-a860-278cc6050e05.png">

Finally, we must calculate the % of used memory. The command is again similar to the previous ones, the only modification we will make is in the printing part. As the operation to get the percentage is not exact, it can give us many decimals and in the subject only 2 appear, so we will do the same, that is why we use ```%.2f``` so that only 2 decimals are shown. Another thing you may not know is that in printf to show a ```%``` you have to put ```%%```. The whole command ```free --mega | awk '$1 == "Mem:" {printf("(%.2f%%)\n", $3/$2*100)}'```.

<img width="798" alt="Captura de pantalla 2022-08-02 a las 3 51 01" src="https://user-images.githubusercontent.com/66915274/182274627-195476b2-1e17-4a4c-8d5c-2056e4e2bbb6.png">

### 5-5 Disk memory

To view the occupied and available memory of the disk, we will use the ```df``` command, which stands for "disk filesystem", it is used to get a complete summary of the use of disk space. As indicated in the subject, the used memory is shown in MB, so we will then use the -m flag. Next, we will do a grep to only show us the lines that contain "/dev/" and then we will do another grep with the -v flag to exclude lines that contain "/boot". Finally, we will use the awk command and sum the value of the third word of each line to once all the lines are summed, print the final result of the sum. The entire command is as follows: ```df -m | grep "/dev/" | grep -v "/boot" | awk '{memory_use += $3} END {print memory_use}'```.

<img width="805" alt="Captura de pantalla 2022-08-03 a las 2 26 15" src="https://user-images.githubusercontent.com/66915274/182498837-4f883b25-e316-4c74-8f6b-a5e8b5d13289.png">

To obtain the total space, we will use a very similar command. The only differences will be that the values we will sum will be $2 instead of $3 and the other difference is that in the subject the total size appears in Gb, so as the result of the sum gives us the number in Mb we must transform it to Gb, for this we must divide the number by 1024 and remove the decimals.

<img width="1195" alt="Screen Shot 2023-03-14 at 8 54 34 PM" src="https://user-images.githubusercontent.com/66915274/225121482-93ae204e-54eb-4397-b25c-b3d99229bba5.png">

Finally, we must show a percentage of the used memory. To do this, again, we will use a command very similar to the previous two. The only thing we will change is that we will combine the two previous commands to have two variables, one that represents the used memory and the other the total. Once we have done this, we will perform an operation to obtain the percentage ```use/total*100``` and the result of this operation will be printed as it appears in the subject, between parentheses and with the % symbol at the end. The final command is this: ```df -m | grep "/dev/" | grep -v "/boot" | awk '{use += $3} {total += $2} END {printf("(%d%%)\n"), use/total*100}'```.

<img width="798" alt="Captura de pantalla 2022-08-03 a las 2 49 33" src="https://user-images.githubusercontent.com/66915274/182500836-dd4b068e-b6ce-4dc6-b832-f90acecfb71c.png">


### 5-6 CPU usage percentage

To view the percentage of CPU usage, we will use the ```vmstat``` command, which shows system statistics, allowing us to obtain a general detail of the processes, memory usage, CPU activity, system status, etc. We could put no option but in my case I will put an interval of seconds from 1 to 4. We will also use the ```tail -1``` command, which will allow us to produce the output only on the last line, so of the 4 generated, only the last one will be printed. Finally, we will only print word 15, which is the available memory usage. The entire command is as follows: ```vmstat 1 4 | tail -1 | awk '{print %15}'```. The result of this command is only part of the final result since there is still some operation to be done in the script for it to be correct. What should be done is to subtract the amount returned by our command from 100, the result of this operation will be printed with one decimal and a % at the end and the operation would be finished.

<img width="580" alt="Captura de pantalla 2022-08-03 a las 0 33 39" src="https://user-images.githubusercontent.com/66915274/182484896-def71bf0-b7eb-49d8-b83b-a019d15f62f1.png">

### 5-7 Last reboot

To see the date and time of our last restart, we will use the ```who``` command with the ```-b``` flag, as this flag will display the time of the last system boot on the screen. As has happened to us before, it shows us more information than we want, so we will filter it and only show what we are interested in, for this we will use the awk command and compare if the first word of a line is "system", the third word of that line will be printed on the screen, a space, and the fourth word. The entire command would be as follows: ```who -b | awk '$1 == "system" {print $3 " " $4}'```.

<img width="661" alt="Captura de pantalla 2022-08-02 a las 12 24 58" src="https://user-images.githubusercontent.com/66915274/182352895-d985e675-5afc-445a-bcd3-68189702fe70.png">

### 5-8 LVM active

To check if LVM is active or not, we will use the ```lsblk``` command, which shows us information about all block devices (hard drives, SSDs, memories, etc) among all the information it provides, we can see lvm in the type of manager. For this command we will do an if because we will print Yes or No. Basically, the condition we are looking for will be to count the number of lines in which "lvm" appears and if there are more than 0 we will print Yes, if there are 0 we will print No. The entire command would be: ```if [ $(lsblk | grep "lvm" | wc -l) -gt 0 ]; then echo yes; else echo no; fi```.

<img width="801" alt="Captura de pantalla 2022-08-02 a las 22 38 43" src="https://user-images.githubusercontent.com/66915274/182468904-3789e22f-dbde-4874-b153-0d86497c55e2.png">

### 5-9 TCP connections

To check the number of established TCP connections, we will use the ```ss``` command replacing the now obsolete netstat. We will filter with the ```-ta``` flag so that only TCP connections are shown. Finally, we will do a grep to see those that are established as there are also only listening and close with wc -l to count the number of lines. The command is as follows: ```ss -ta | grep ESTAB | wc -l```.

<img width="479" alt="Captura de pantalla 2022-08-03 a las 0 53 36" src="https://user-images.githubusercontent.com/66915274/182487028-746244f8-2cda-4dc7-a14c-b2e5a7e0dc51.png">

### 5-10 Number of users

We will use the ```users``` command which will show us the names of the users there are, knowing this, we will put ```wc -w``` to count the number of words in the command output. The entire command is as follows: ```users | wc -w```.

<img width="380" alt="Captura de pantalla 2022-08-02 a las 12 33 29" src="https://user-images.githubusercontent.com/66915274/182354436-282547cf-22c8-4b03-9484-6801c0466de7.png">


### 5-11 IP adress & MAC

To obtain the host address, we will use the ```hostname -I``` command and to obtain the MAC, we will use the ```ip link``` command which is used to show or modify the network interfaces. As more than one interface, IP's etc. appear, we will use the grep command to search for what we want and thus be able to print only what is requested. To do this, we will put ```ip link | grep "link/ether" | awk '{print $2}'``` and in this way we will only print the MAC.

<img width="639" alt="Captura de pantalla 2022-08-02 a las 14 53 14" src="https://user-images.githubusercontent.com/66915274/182379380-8e3b803d-d001-42ae-8aea-467e8c9f3ea9.png">

### 5-12 Number of commands executed with sudo

To obtain the number of commands executed with sudo, we will use the ```journaclctl``` command, which is a tool that is responsible for collecting and managing the system logs. Next, we will put ```_COMM=sudo``` in order to filter the entries by specifying its path. In our case we put ```_COMM``` because it refers to an executable script. Once we have filtered the search and only the sudo logs appear, we still need to filter a bit more as when you start or close the root session it also appears in the log, so to finish filtering we will put a ```grep COMMAND``` and this will only show the command lines. Finally, we will put ```wc -l``` so that the lines are numbered. The entire command is as follows: ```journalctl _COMM=sudo | grep COMMAND | wc -l)```. To check that it works correctly, we can run the command in the terminal, put a command that includes sudo and run the command again and it should increase the number of sudo executions.

<img width="632" alt="Captura de pantalla 2022-08-02 a las 23 50 39" src="https://user-images.githubusercontent.com/66915274/182479668-949b8eee-81f6-4593-83f4-99053d199f1b.png">

### 5-13 Total result of the script

⚠️ Remember not to copy and paste if you do not know the function of each command. ⚠️

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
Script viewed from nano ↙️

<img width="911" alt="Captura de pantalla 2022-08-03 a las 3 47 31" src="https://user-images.githubusercontent.com/66915274/182506484-f5a095b8-4751-461e-a114-f8e36b4cfa9a.png">

Result after executing the script ↙️

<img width="796" alt="Captura de pantalla 2022-08-03 a las 3 46 15" src="https://user-images.githubusercontent.com/66915274/182506357-f5466a97-380b-4b6d-9b79-89e01a31498a.png">

## 6- Crontab ⏰

🧠 <b>What is crontab?</b>It is a background process manager. The specified processes will be executed at the time you specify in the crontab file.

To properly configure crontab, we must edit the crontab file with the following command ```sudo crontab -u root -e```. 

In the file, we must add the following command for the script to execute every 10 minutes ```*/10 * * * * sh /ruta del script```. 

<img width="798" alt="Captura de pantalla 2022-08-03 a las 4 40 18" src="https://user-images.githubusercontent.com/66915274/182512395-eaebabc2-5866-4ae3-966c-1a80818cde07.png">

Operation of each crontab parameter:

m ➤ Corresponds to the minute at which the script will be executed, the value ranges from 0 to 59.

h ➤ The exact hour, the 24-hour format is used, the values range from 0 to 23, with 0 being 12:00 midnight.
dom ➤ refers to the day of the month, for example, you can specify 15 if you want to execute every day 15.

dow ➤ means the day of the week, it can be numeric (0 to 7, where 0 and 7 are Sunday) or the first three letters of the day in English: mon, tue, wed, thu, fri, sat, sun.

user ➤ Defines the user who will execute the command, it can be root, or another user as long as it has permission to execute the script.

command ➤ Refers to the command or the absolute path of the script to be executed.

## 7- Signature.txt 📝

To obtain the signature, the first thing we must do is shut down the virtual machine, since once you turn it on or modify something, the signature will change.

<img width="834" alt="Captura de pantalla 2022-08-03 a las 4 47 32" src="https://user-images.githubusercontent.com/66915274/182513283-1cfc319f-982d-47cf-a596-8475d4c96616.png">

The next step will be to locate ourselves in the path where we have the .vdi of our virtual machine.

<img width="465" alt="Screen Shot 2022-08-03 at 4 57 37 AM" src="https://user-images.githubusercontent.com/66915274/182514499-f0ad5ba7-c0c2-493e-b0ae-9b79c970816e.png">

Finally, we will run ```shasum machinename.vdi``` and this will give us the signature. The result of this signature is what we will need to add to our signature.txt file and subsequently upload the file to the intra repository. It is very important not to reopen the machine since the signature will be modified. For corrections, remember to clone the machine so you can turn it on without fear of changing the signature.

🧠 <b> What is shasum❓</b> It is a command that allows you to identify the integrity of a file using the SHA-1 hash check sum of a file.

<img width="416" alt="Screen Shot 2022-08-03 at 4 58 48 AM" src="https://user-images.githubusercontent.com/66915274/182514627-f11026d0-de0d-447d-a2e4-31a3c1af0f35.png">

## 8- Bonus ⭐️

### 8.1- Manual partition

1 ◦ When choosing disk partitioning, we will select manual. This way we can edit the partitions one by one.

<img width="789" alt="Screen Shot 2022-10-23 at 4 30 48 PM" src="https://user-images.githubusercontent.com/66915274/197397840-b6ae9d65-a6aa-4a5d-a03f-856d9ce81644.png">

2 ◦ In this section, it shows us a general description of our partitions and mount points. Currently, we do not have any partitions. To create a new partition table, we must choose the device where we want to create them. In our case, we will choose the only one available.

<img width="793" alt="Screen Shot 2022-10-23 at 4 35 39 PM" src="https://user-images.githubusercontent.com/66915274/197398114-44abc561-d34d-47c9-b512-581b4ec6fddb.png">

3 ◦ We accept the confirmation message. Basically, it warns us that if there are already partitions on the device, they will be deleted and that if we are sure to create a new empty partition table.

<img width="770" alt="Screen Shot 2022-10-23 at 4 36 08 PM" src="https://user-images.githubusercontent.com/66915274/197398137-b9fe1f96-5907-462e-8a50-44b71ae2aefe.png">

4 ◦ Once we have completed the previous step, we can see how our partition table appears empty. Now we must configure it, for this we must select it.

<img width="786" alt="Screen Shot 2022-10-23 at 4 36 35 PM" src="https://user-images.githubusercontent.com/66915274/197398172-b05fa7aa-e5b4-40cb-afd4-03a1404d7885.png">

5 ◦ We will create a new partition.

<img width="512" alt="Screen Shot 2022-10-23 at 4 36 54 PM" src="https://user-images.githubusercontent.com/66915274/197398199-70570553-de1b-49a9-8c44-da9a1e4b5c1e.png">

We will start by creating this:

![image](https://user-images.githubusercontent.com/66915274/197427077-48636236-4012-4edf-b0e4-319db502e685.png)

6 ◦ As the subject indicates, the size of the partition must be 500 megabytes.

<img width="777" alt="Screen Shot 2022-10-23 at 4 37 27 PM" src="https://user-images.githubusercontent.com/66915274/197398241-604b2bb2-7303-412a-b382-40bfbf443ed0.png">

7 ◦ We choose the type of partition. We choose primary because it will be the partition where the Operating System will be installed.

<img width="457" alt="Screen Shot 2022-10-23 at 4 37 38 PM" src="https://user-images.githubusercontent.com/66915274/197398253-2c0f8205-3d3f-4ab7-94a3-70c37ee014d9.png">

Brief description of all types of partitions:

◦ <b>Primary:</b> The only partition on which an OS can be installed. There can only be 4 primary partitions per hard drive or 3 primary and one extended.

◦ <b>Secondary/Extended:</b> It was designed to break the 4 primary partition limitation on a single physical disk. There can only be one partition of this type per disk, and it only serves to contain logical partitions.

◦ <b>Logical:</b> It occupies a portion of the primary/extended partition or the whole of it, which has been formatted with a specific type of file system (in our case we will use ext4) and has been assigned a unit, so the operating system recognizes the logical partitions or its file system. There can be a maximum of 23 logical partitions in an extended partition, however, Linux, the OS we are currently working with, reduces it to 15, more than enough for this project.

8 ◦ We will select beginning because we want the new partition to be created at the beginning of the available space.

<img width="787" alt="Screen Shot 2022-10-23 at 4 37 52 PM" src="https://user-images.githubusercontent.com/66915274/197398265-c63d7b32-55b7-45ad-86b3-166e44cfd598.png">

9 ◦ In the following screenshot it shows the details of the partition. We will modify the mount point as specified in the subject.

<img width="781" alt="Screen Shot 2022-10-23 at 4 38 27 PM" src="https://user-images.githubusercontent.com/66915274/197398293-2487ded0-2584-48c4-a5ea-1f2464ec39f9.png">

10 ◦ We choose boot as the mount point for our partition.

<img width="577" alt="Screen Shot 2022-10-23 at 4 38 49 PM" src="https://user-images.githubusercontent.com/66915274/197398322-51b9854b-ab32-4d81-8126-3ef3913858a6.png">

11 ◦ We finish configuring the current partition.

<img width="787" alt="Screen Shot 2022-10-23 at 4 39 07 PM" src="https://user-images.githubusercontent.com/66915274/197398336-72b17153-73dc-48a5-b7d3-839877e8983b.png">

12 ◦ Once we have completed the previous step, the partition should already appear. Now we must create a logical partition with all the available space on the disk, which has no mount point and is encrypted. To do this, we select the free space where we want to create it.

<img width="781" alt="Screen Shot 2022-10-23 at 4 39 37 PM" src="https://user-images.githubusercontent.com/66915274/197398367-ee8a1f5d-3941-4a86-a775-90f29b1c955e.png">

![image](https://user-images.githubusercontent.com/66915274/197431553-718358bb-6570-41dd-b114-09acc347999d.png)

13 ◦ We create a new partition.

<img width="462" alt="Screen Shot 2022-10-23 at 4 39 58 PM" src="https://user-images.githubusercontent.com/66915274/197398396-843c7fb3-b945-4305-a960-02aa9d4ca940.png">

14 ◦ We select the maximum size.

<img width="779" alt="Screen Shot 2022-10-23 at 4 40 26 PM" src="https://user-images.githubusercontent.com/66915274/197398425-63205376-839f-4986-a8d0-981cdaa380e4.png">

15 ◦ We select the type of partition, in this case logical.

<img width="466" alt="Screen Shot 2022-10-23 at 4 40 53 PM" src="https://user-images.githubusercontent.com/66915274/197398448-49c99180-9a3d-4dd4-a9ce-d680bfdefa1c.png">

16 ◦ We will modify the mount point.

<img width="788" alt="Screen Shot 2022-10-23 at 4 41 44 PM" src="https://user-images.githubusercontent.com/66915274/197398500-188cc4fb-4eb5-4a56-893b-58838877c056.png">

17 ◦ We will choose the option not to mount it.

<img width="590" alt="Screen Shot 2022-10-23 at 4 42 11 PM" src="https://user-images.githubusercontent.com/66915274/197398518-f6fb7588-8c53-40a9-9ceb-238d6a62d942.png">

18 ◦ We finish configuring the current partition.

<img width="788" alt="Screen Shot 2022-10-23 at 4 42 41 PM" src="https://user-images.githubusercontent.com/66915274/197398541-922f2c4d-ed5a-4d92-8083-ccf57aec3dee.png">

19 ◦ We will configure encrypted volumes. This way we can encrypt our partition.

<img width="786" alt="Screen Shot 2022-10-23 at 4 43 08 PM" src="https://user-images.githubusercontent.com/66915274/197398562-2369fa90-7db9-4ba3-abed-7ac15ede8b81.png">

20 ◦ We accept the confirmation message.

<img width="777" alt="Screen Shot 2022-10-23 at 4 43 27 PM" src="https://user-images.githubusercontent.com/66915274/197398573-9720e351-04f4-49f0-a3dc-fe0ce1ada296.png">

21 ◦ We create the encrypted volumes.

<img width="596" alt="Screen Shot 2022-10-23 at 4 43 46 PM" src="https://user-images.githubusercontent.com/66915274/197398595-b36ab8da-86c6-483a-99fd-079293a92570.png">

22 ◦ We select which partition we want to encrypt.

<img width="568" alt="Screen Shot 2022-10-23 at 4 44 06 PM" src="https://user-images.githubusercontent.com/66915274/197398615-7c9f8e45-7885-4f39-84eb-e3a056eeb2c7.png">

23 ◦ We finish configuring the current partition.

<img width="787" alt="Screen Shot 2022-10-23 at 4 44 35 PM" src="https://user-images.githubusercontent.com/66915274/197398649-06749ec8-903d-4b1a-af2a-c2dad77bcaec.png">

24 ◦ We finish because we don't want to create more encrypted volumes.

<img width="589" alt="Screen Shot 2022-10-23 at 4 44 49 PM" src="https://user-images.githubusercontent.com/66915274/197398663-0bd74c65-b3fd-430c-b3e6-4f1e0c76ae8d.png">

25 ◦ We accept the confirmation message. It tells us that everything inside the partition will be encrypted and it should not take long to finish.

<img width="783" alt="Screen Shot 2022-10-23 at 4 45 06 PM" src="https://user-images.githubusercontent.com/66915274/197398670-91db3e3e-b271-4e1b-ad8a-28ceb06e0897.png">

26 ◦ We don't care if it takes a long time or not, we cancel it because there is nothing to encrypt since the partition is empty.

<img width="789" alt="Screen Shot 2022-10-23 at 4 45 27 PM" src="https://user-images.githubusercontent.com/66915274/197398685-6603ef31-d499-46da-949f-ade8e2a05bf9.png">

27 ◦ Again we must enter a password, this time it will be the encryption phrase. As I previously mentioned, you must repeat the process and write it down as it will be important in the future.

<img width="779" alt="Screen Shot 2022-10-23 at 4 48 38 PM" src="https://user-images.githubusercontent.com/66915274/197398855-0c93f419-897e-4eee-9499-18321d8e8dfd.png">

28 ◦ We repeat the encryption phrase.

<img width="722" alt="Screen Shot 2022-10-23 at 4 49 01 PM" src="https://user-images.githubusercontent.com/66915274/197398875-3fa85638-7105-42bf-bbc2-e189fbbc1918.png">

29 ◦ We will configure the logical volume manager.

<img width="785" alt="Screen Shot 2022-10-23 at 4 50 17 PM" src="https://user-images.githubusercontent.com/66915274/197398933-85e0025e-0a4d-41f0-8fd0-5f0c8ee32e9b.png">

30 ◦ We will accept the confirmation message as we agree to save the changes to the disk.

<img width="786" alt="Screen Shot 2022-10-23 at 4 50 42 PM" src="https://user-images.githubusercontent.com/66915274/197398945-d79ea2a7-a13e-4e6a-9e9c-40bdcd2dd502.png">

31 ◦ We will create a new volume group. Volume groups group partitions.

<img width="454" alt="Screen Shot 2022-10-23 at 4 52 04 PM" src="https://user-images.githubusercontent.com/66915274/197399021-29b21274-37c1-4fd9-8526-962969d1cce3.png">

32 ◦ We will enter the name we want to give it. ```LVMGroup``` as indicated in the subject.

<img width="695" alt="Screen Shot 2022-10-23 at 4 52 58 PM" src="https://user-images.githubusercontent.com/66915274/197399065-1ac8d80d-9e18-4b4a-a60f-11496e7de26d.png">

33 ◦ We will select the partition where we want to create the group.

<img width="590" alt="Screen Shot 2022-10-23 at 4 53 22 PM" src="https://user-images.githubusercontent.com/66915274/197399089-5ea5f48e-176c-4278-8b14-a13b7f5ee45c.png">

34 ◦ Now we must create all the logical partitions. As we have to repeat the same actions several times, there are captures that will not be documented.

![image](https://user-images.githubusercontent.com/66915274/197439138-889d6368-1875-402b-a094-bd146bb7cb8a.png)


<img width="457" alt="Screen Shot 2022-10-23 at 4 53 50 PM" src="https://user-images.githubusercontent.com/66915274/197399108-fb566eb4-664f-4509-8948-ab4ed04407b5.png">

35 ◦ We will start by choosing the group where we want them to be created. We select the only one available (the one we just created).

<img width="760" alt="Screen Shot 2022-10-23 at 4 54 02 PM" src="https://user-images.githubusercontent.com/66915274/197399115-e7d3b313-763c-421c-a71d-850d318432e7.png">

36 ◦ The order of creation of the logical units will be the same as indicated in the subject, so we will start with root and end with var-log. Then we will select the name of the logical volume.

<img width="662" alt="Screen Shot 2022-10-23 at 4 55 42 PM" src="https://user-images.githubusercontent.com/66915274/197399188-6ae8c83b-057d-498f-b112-9116079b0808.png">

37 ◦ Size, as indicated in the subject, will be 10g.

<img width="782" alt="Screen Shot 2022-10-23 at 4 56 21 PM" src="https://user-images.githubusercontent.com/66915274/197399216-c65f43ca-fb8e-4d05-9212-24ad2ee87b39.png">

38 ◦ We repeat the process for ```swap```. We only change the name and size.

<img width="443" alt="Screen Shot 2022-10-23 at 4 56 49 PM" src="https://user-images.githubusercontent.com/66915274/197399239-c26598cb-e7bb-474c-aece-90f043e1990f.png">

<img width="751" alt="Screen Shot 2022-10-23 at 4 57 26 PM" src="https://user-images.githubusercontent.com/66915274/197399278-c5cd5a9c-2ab1-42b9-8871-b58e9b33b4b6.png">

<img width="667" alt="Screen Shot 2022-10-23 at 4 57 41 PM" src="https://user-images.githubusercontent.com/66915274/197399288-7ecf6adf-aaf5-46bf-959f-2159d19b7bbf.png">

<img width="782" alt="Screen Shot 2022-10-23 at 4 58 11 PM" src="https://user-images.githubusercontent.com/66915274/197399310-fc6c397e-8257-4e06-8fba-ad35431c9b96.png">

39 ◦ We repeat the process for ```home```. We only change the name and size.

<img width="476" alt="Screen Shot 2022-10-23 at 4 58 57 PM" src="https://user-images.githubusercontent.com/66915274/197399347-a815d58b-686e-4d9d-bb5c-34a7b54476ab.png">

<img width="756" alt="Screen Shot 2022-10-23 at 4 59 07 PM" src="https://user-images.githubusercontent.com/66915274/197399355-28617029-c28c-4ca4-b56b-646e066cded6.png">

<img width="672" alt="Screen Shot 2022-10-23 at 5 01 13 PM" src="https://user-images.githubusercontent.com/66915274/197399433-1e9c7110-9240-4982-9835-b026ed73171f.png">

<img width="770" alt="Screen Shot 2022-10-23 at 5 04 34 PM" src="https://user-images.githubusercontent.com/66915274/197399610-247a7a35-0141-4c14-884e-7ecd07caa96d.png">

40 ◦ We repeat the process for ```var```. We only change the name and size.

<img width="482" alt="Screen Shot 2022-10-23 at 5 05 10 PM" src="https://user-images.githubusercontent.com/66915274/197399644-58da651c-f4ad-4d1e-b128-de87c92cc292.png">

<img width="700" alt="Screen Shot 2022-10-23 at 5 05 30 PM" src="https://user-images.githubusercontent.com/66915274/197399662-32ab0a06-c14d-4a0e-ac80-cb0d12fc24eb.png">

<img width="774" alt="Screen Shot 2022-10-23 at 5 06 03 PM" src="https://user-images.githubusercontent.com/66915274/197399693-b49c2ffe-b21a-43c5-bd3f-160bc544b072.png">

41 ◦ We repeat the process for ```srv```. We only change the name.

<img width="446" alt="Screen Shot 2022-10-23 at 5 06 14 PM" src="https://user-images.githubusercontent.com/66915274/197399702-6d531de3-690d-458d-9a3b-bf6ceedd7cda.png">

<img width="754" alt="Screen Shot 2022-10-23 at 5 06 39 PM" src="https://user-images.githubusercontent.com/66915274/197399724-0fdd75ad-e978-4468-8509-a62cdc4a3faf.png">

<img width="671" alt="Screen Shot 2022-10-23 at 5 06 57 PM" src="https://user-images.githubusercontent.com/66915274/197399744-b82b1dcd-09c7-44cc-a2ab-b6079abcbb5a.png">

<img width="771" alt="Screen Shot 2022-10-23 at 5 07 13 PM" src="https://user-images.githubusercontent.com/66915274/197399757-94732b16-585e-4f7d-a20f-f7ef0814b4e7.png">

42 ◦ We repeat the process for ```tmp```. We only change the name.

<img width="481" alt="Screen Shot 2022-10-23 at 5 07 34 PM" src="https://user-images.githubusercontent.com/66915274/197399777-9d871f2a-856d-4b4d-ad18-1195001b0fdf.png">

<img width="732" alt="Screen Shot 2022-10-23 at 5 07 46 PM" src="https://user-images.githubusercontent.com/66915274/197399792-0794ace5-c236-4f68-b023-bb471753eba2.png">

<img width="659" alt="Screen Shot 2022-10-23 at 5 07 55 PM" src="https://user-images.githubusercontent.com/66915274/197399798-84a31102-6953-468b-85d4-0a248e98cb17.png">

<img width="768" alt="Screen Shot 2022-10-23 at 5 08 19 PM" src="https://user-images.githubusercontent.com/66915274/197399827-5dfc8571-e82c-4a28-aae7-dc716fb6e77b.png">

43 ◦ Finally, we repeat the process for ```var-log```. We only change the name and size.

<img width="448" alt="Screen Shot 2022-10-23 at 5 08 34 PM" src="https://user-images.githubusercontent.com/66915274/197399838-2cd49171-45dd-469a-887c-3ce99d84b7cd.png">

<img width="762" alt="Screen Shot 2022-10-23 at 5 08 40 PM" src="https://user-images.githubusercontent.com/66915274/197399841-04b75112-4d21-456c-bf50-8335839764e0.png">

<img width="658" alt="Screen Shot 2022-10-23 at 5 08 59 PM" src="https://user-images.githubusercontent.com/66915274/197399859-d706de2e-bb20-4a04-96db-4dd57b3778be.png">

<img width="779" alt="Screen Shot 2022-10-23 at 5 09 28 PM" src="https://user-images.githubusercontent.com/66915274/197399886-a1e9ee69-78a4-4071-af99-2192d535c6cd.png">


44 ◦ Once we have completed all the previous steps, we will finish the configuration of the logical volume manager.

<img width="438" alt="Screen Shot 2022-10-23 at 5 09 51 PM" src="https://user-images.githubusercontent.com/66915274/197399904-c584fcdf-eb38-486f-af12-7374f1e04465.png">

45 ◦ Now we can see how in the section where it shows us all our partitions and free space, all the logical partitions that we just created are already appearing. Good, we must configure all of them to select the file system that we want and the mount point indicated in the subject. Again we will go in order and select the first one that appears, which is ```home```.

<img width="783" alt="Screen Shot 2022-10-23 at 5 10 36 PM" src="https://user-images.githubusercontent.com/66915274/197399944-bccbe599-b80a-4abe-ac6c-d770447ea727.png">

46 ◦ Show us the configuration of the partition. We must choose a file system as it currently does not have one.

<img width="782" alt="Screen Shot 2022-10-23 at 5 10 55 PM" src="https://user-images.githubusercontent.com/66915274/197399976-9b871bda-9425-4dbe-b8c9-25c8c6d6c811.png">

47 ◦ Choose the Ext4 file system, it is the most commonly used file system in Linux distributions.

<img width="412" alt="Screen Shot 2022-10-23 at 5 11 18 PM" src="https://user-images.githubusercontent.com/66915274/197400000-2e855fc9-10b1-4f3e-9c58-85b6ff02a4fb.png">

48 ◦ Now we need to select the mount point.

<img width="782" alt="Screen Shot 2022-10-23 at 5 11 44 PM" src="https://user-images.githubusercontent.com/66915274/197400023-387a70aa-b491-43c0-91d2-cb378da9fc75.png">

49 ◦ We select ```home``` as indicated in the subject.

<img width="515" alt="Screen Shot 2022-10-23 at 5 11 54 PM" src="https://user-images.githubusercontent.com/66915274/197400040-e79cad4f-368b-4cee-9ec0-942f38b2f785.png">

50 ◦ Once we have selected it, we will finish the configuration of the partition.

<img width="785" alt="Screen Shot 2022-10-23 at 5 12 10 PM" src="https://user-images.githubusercontent.com/66915274/197400059-ab96f2c4-cd92-47cb-a9ee-61257537ee6a.png">

51 ◦ Again, these steps can become very repetitive so I won't comment much. We repeat everything the same way (except for the mount point) for ```root```.

<img width="782" alt="Screen Shot 2022-10-23 at 5 13 36 PM" src="https://user-images.githubusercontent.com/66915274/197400135-c08444fe-e39d-45fa-a3b6-3c73db2a4935.png">

<img width="782" alt="Screen Shot 2022-10-23 at 5 13 53 PM" src="https://user-images.githubusercontent.com/66915274/197400146-41ce0b0c-142c-46b4-a3c5-918676a3a852.png">

<img width="421" alt="Screen Shot 2022-10-23 at 5 14 08 PM" src="https://user-images.githubusercontent.com/66915274/197400155-92759327-5671-41f4-8104-dd1de4bc88cb.png">

<img width="775" alt="Screen Shot 2022-10-23 at 5 14 22 PM" src="https://user-images.githubusercontent.com/66915274/197400171-6fd04783-e833-4afd-a753-4b943133a4ab.png">

<img width="525" alt="Screen Shot 2022-10-23 at 5 14 39 PM" src="https://user-images.githubusercontent.com/66915274/197400182-780e1917-3f77-4986-b0e8-b50a90d75403.png">

<img width="790" alt="Screen Shot 2022-10-23 at 5 14 52 PM" src="https://user-images.githubusercontent.com/66915274/197400186-88da831a-c672-4ec0-a64c-0ad2808bb6c5.png">

52 ◦ Repeat the process for ```srv``` and change the mount point.

<img width="778" alt="Screen Shot 2022-10-23 at 5 15 05 PM" src="https://user-images.githubusercontent.com/66915274/197400198-599b4aa3-a511-45d1-86b0-dd42da4c380f.png">

<img width="778" alt="Screen Shot 2022-10-23 at 5 15 31 PM" src="https://user-images.githubusercontent.com/66915274/197400218-e6b26eb7-7933-426f-a7cd-a791400ebdab.png">

<img width="428" alt="Screen Shot 2022-10-23 at 5 15 37 PM" src="https://user-images.githubusercontent.com/66915274/197400222-95107b34-8d28-4d4d-a74b-7de6c6a46d33.png">

<img width="787" alt="Screen Shot 2022-10-23 at 5 15 44 PM" src="https://user-images.githubusercontent.com/66915274/197400227-20c13dc0-52cd-4c70-bf4e-531979c54a3e.png">

<img width="530" alt="Screen Shot 2022-10-23 at 5 15 52 PM" src="https://user-images.githubusercontent.com/66915274/197400238-3b403294-74d1-4e63-aca7-7d83447ed5b8.png">

<img width="790" alt="Screen Shot 2022-10-23 at 5 16 04 PM" src="https://user-images.githubusercontent.com/66915274/197400249-035f6b9d-3716-4565-9776-aa0af49b3fd7.png">

53 ◦ For ```swap```, we will make an exception because the file system will be different. We select ```swap```.

<img width="780" alt="Screen Shot 2022-10-23 at 5 16 32 PM" src="https://user-images.githubusercontent.com/66915274/197400272-112b44ef-4996-438a-90b8-6620cdd7d2ff.png">

54 ◦ At the time of selecting the file system, we leave it on ```swap area```.

<img width="785" alt="Screen Shot 2022-10-23 at 5 16 41 PM" src="https://user-images.githubusercontent.com/66915274/197400281-e12ee636-8696-4bee-9198-862b7d6be199.png">

55 ◦ Once the previous step is completed, we will finish the partition configuration.

<img width="370" alt="Screen Shot 2022-10-23 at 5 16 59 PM" src="https://user-images.githubusercontent.com/66915274/197400297-8eed129d-0ec0-49a8-8b2a-dd0d04055f75.png">

<img width="787" alt="Screen Shot 2022-10-23 at 5 17 09 PM" src="https://user-images.githubusercontent.com/66915274/197400309-74e83209-4b2a-4e27-9a67-44373c1db362.png">

56 ◦ Now we will do the same thing as before, but now we will do it with ```tmp``` and changing the mount point.

<img width="777" alt="Screen Shot 2022-10-23 at 5 17 41 PM" src="https://user-images.githubusercontent.com/66915274/197400341-608516f6-0f5a-4cdd-83d8-c8fbd1635624.png">

<img width="778" alt="Screen Shot 2022-10-23 at 5 17 49 PM" src="https://user-images.githubusercontent.com/66915274/197400346-e9647c7a-a9a2-4a0f-b439-a912247fb3f9.png">

<img width="372" alt="Screen Shot 2022-10-23 at 5 18 01 PM" src="https://user-images.githubusercontent.com/66915274/197400360-1816d06a-252e-4d41-b1a2-fc547961f353.png">

<img width="781" alt="Screen Shot 2022-10-23 at 5 18 08 PM" src="https://user-images.githubusercontent.com/66915274/197400370-0474b71f-c1c3-445f-ba02-088dc1c64ce3.png">

<img width="496" alt="Screen Shot 2022-10-23 at 5 18 24 PM" src="https://user-images.githubusercontent.com/66915274/197400386-f66494c5-97b9-4bb9-8c75-5856d69d26cc.png">

<img width="783" alt="Screen Shot 2022-10-23 at 5 18 40 PM" src="https://user-images.githubusercontent.com/66915274/197400405-4a368bfb-f862-4bbd-a33e-b87c3038d232.png">

57 ◦ We repeat the process again for ```var```, changing the mount point.

<img width="773" alt="Screen Shot 2022-10-23 at 5 19 13 PM" src="https://user-images.githubusercontent.com/66915274/197400447-85bcad13-8083-4aec-acb2-fa467e5d4e33.png">

<img width="790" alt="Screen Shot 2022-10-23 at 5 19 21 PM" src="https://user-images.githubusercontent.com/66915274/197400452-aed22368-4889-4c04-bf60-5a06fb93944e.png">

<img width="386" alt="Screen Shot 2022-10-23 at 5 19 28 PM" src="https://user-images.githubusercontent.com/66915274/197400459-b6f59948-e804-414a-b41d-21d2f495fccc.png">

<img width="780" alt="Screen Shot 2022-10-23 at 5 19 36 PM" src="https://user-images.githubusercontent.com/66915274/197400462-788d29e5-7798-418a-8725-3cb8dd2849bd.png">

<img width="515" alt="Screen Shot 2022-10-23 at 5 19 51 PM" src="https://user-images.githubusercontent.com/66915274/197400473-4508d9d6-481d-4f3a-9630-6c1eba7c5cc0.png">

<img width="779" alt="Screen Shot 2022-10-23 at 5 20 00 PM" src="https://user-images.githubusercontent.com/66915274/197400482-1f8c147f-66d8-438b-866f-3e9eff75ef5e.png">

58 ◦ Finally, we repeat the process again for ```var-log```. In this case, we will have to manually enter the mount point..

<img width="772" alt="Screen Shot 2022-10-23 at 5 20 23 PM" src="https://user-images.githubusercontent.com/66915274/197400513-53b3f899-47f5-4cdb-ab4b-205b1d1bce31.png">

![image](https://user-images.githubusercontent.com/66915274/197602511-fa34155b-3244-4b0c-8054-2778edecfb16.png)

![image](https://user-images.githubusercontent.com/66915274/197602585-03b540af-5d7a-4364-b90a-559bac0cb2a2.png)

![image](https://user-images.githubusercontent.com/66915274/197602630-cc749189-9ac9-48bc-a595-dc33282840ec.png)

![image](https://user-images.githubusercontent.com/66915274/197602673-5c18be85-1b0f-430b-b507-66711b807115.png)

![image](https://user-images.githubusercontent.com/66915274/197602699-fddadd2d-c54d-4313-8165-a93db1249b26.png)

![image](https://user-images.githubusercontent.com/66915274/197602741-431bd866-1558-4735-bb34-ab57dc5745b7.png)

59 ◦ Once we have completed all of the previous steps, we are almost finished. We must click 'finish partitioning' to save all of the changes to the disk.

![image](https://user-images.githubusercontent.com/66915274/197602907-4a3ba459-1a5d-468e-81dc-5206403cf034.png)

60 ◦ We accept the message and the changes will be saved. Make sure that all of the partitions look the same as in the screenshot.

![image](https://user-images.githubusercontent.com/66915274/197602944-13ca67b2-bcc5-476c-84dc-aadc5e1d3baf.png)

61 ◦ We select the option ```No``` because we do not need additional packages. 

<img width="770" alt="Captura de pantalla 2022-07-13 a las 20 05 42" src="https://user-images.githubusercontent.com/66915274/178801099-2dda24f5-0d46-4184-8c44-a8fe0bf46527.png">

62 ◦ We choose our Country.

<img width="756" alt="Captura de pantalla 2022-07-13 a las 20 14 23" src="https://user-images.githubusercontent.com/66915274/178802653-d9e8504a-b60b-4441-8ee3-8d48ca4a6bf0.png">

63 ◦ We choose ```deb.debian.org``` because, considering our region, it is where we will have the best connection.

<img width="792" alt="Captura de pantalla 2022-07-13 a las 20 15 00" src="https://user-images.githubusercontent.com/66915274/178802772-4f67cd99-60d5-4439-8502-317e81e07d70.png">

64 ◦ We will leave this option empty and click directly on ```Continue```.

<img width="797" alt="Captura de pantalla 2022-07-13 a las 20 17 24" src="https://user-images.githubusercontent.com/66915274/178803208-2969acae-3fa7-423e-8a3c-bb7c76eff824.png">

65 ◦ We selected the option ```No``` because we do not want developers to see our statistics even though they are anonymous.

<img width="796" alt="Captura de pantalla 2022-07-13 a las 20 21 54" src="https://user-images.githubusercontent.com/66915274/178803926-a4efbc70-f3e2-4e6c-9809-9152478d8237.png">

66 ◦ We will remove all the software options (using the spacebar) and press ```Continue```.

<img width="797" alt="Captura de pantalla 2022-07-13 a las 20 24 17" src="https://user-images.githubusercontent.com/66915274/178804377-e775b89e-93d4-482f-a4d0-0ef126f47719.png">

67 ◦ We will select ```Yes``` to install  [GRUB boot](https://es.wikipedia.org/wiki/GNU_GRUB) on the hard drive.

<img width="792" alt="Captura de pantalla 2022-07-13 a las 20 26 24" src="https://user-images.githubusercontent.com/66915274/178804771-ba16e0b7-9f06-4c5b-9451-0bfd65efd2bb.png">

68 ◦ We will choose the device for the bootloader installation ```/dev/sda (ata_VBOX_HARDDISK)```.

<img width="792" alt="Captura de pantalla 2022-07-13 a las 20 35 46" src="https://user-images.githubusercontent.com/66915274/178806441-f1bf3159-4e09-4c9a-9102-b3261c9000d8.png">

69 ◦ We will press ```Continue``` to finish the installation. 

<img width="794" alt="Captura de pantalla 2022-07-13 a las 20 39 30" src="https://user-images.githubusercontent.com/66915274/178807102-e2a9722e-791f-48a0-ae35-b05b36a37ed2.png">

70 ◦ Once we have finished with the installation of Debian, we must set up our virtual machine.

[Click here to navigate to the virtual machine settings ⚙️](#4--virtual-machine-setup-%EF%B8%8F)

### 8.2 - Wordpress & services configuration 🌐

### Lighttpd 

🧠 <b> What is Lighttpd❓</b> Lighttpd is a web server designed to be fast, secure, flexible, and standards-compliant. It is optimized for environments where speed is a top priority because it consumes less CPU and RAM than other servers.

1 ◦ Installation of Lighttpd packages.

<img width="791" alt="Screen Shot 2022-10-27 at 4 09 24 AM" src="https://user-images.githubusercontent.com/66915274/198174389-428c30e0-c437-4bc1-b8df-40dd2fb0c0ce.png">

2 ◦ We allow connections through port 80 with the command ```sudo ufw allow 80```.

<img width="306" alt="Screen Shot 2022-10-27 at 4 15 24 AM" src="https://user-images.githubusercontent.com/66915274/198175046-8ea3f052-32f1-4107-a9a1-c9271d6c9ce6.png">

3 ◦ We check that we have actually allowed it. Port 80 and allow should appear.

<img width="460" alt="Screen Shot 2022-10-27 at 4 15 45 AM" src="https://user-images.githubusercontent.com/66915274/198175075-da6833f1-2360-4e08-b708-99f920b8215c.png">

4 ◦ We add the rule that includes port 80. If you don't remember how to add rules in port forwarding. Machine configuration → Network → Port forwarding → Replicate the capture

<img width="877" alt="Screen Shot 2022-11-18 at 2 49 56 PM" src="https://user-images.githubusercontent.com/66915274/202720044-d7a51add-c5ee-4da4-9057-258e47cfd036.png">

### WordPress 

🧠 <b> What is Wordpress❓</b> It is a content management system focused on the creation of any type of website.

1 ◦ To install the latest version of WordPress we must first install wget and zip. To do this we will use the following command ```sudo apt install wget zip```.

🧠 <b>What is wget❓</b> It is a command line tool used to download files from the web.

🧠 <b>What is zip❓</b> It is a command line utility for compressing and decompressing files in ZIP format.

<img width="584" alt="Screen Shot 2022-11-18 at 2 45 11 PM" src="https://user-images.githubusercontent.com/66915274/202719000-dfc10731-7d29-4976-9867-d2a38e0f6407.png">

2 ◦ Once we have installed the packages we must locate ourselves in the folder /var/www/ with the command cd we will access it ```cd /var/www/```.

<img width="361" alt="Screen Shot 2022-11-18 at 2 45 53 PM" src="https://user-images.githubusercontent.com/66915274/202719112-c238f259-2a59-41ea-bbaa-8676742b2ef2.png">

3 ◦ Once we are in the path /var/www/ we must download the latest version of WordPress. As my native language is Spanish I will select the latest version in Spanish. We will use the following command: ```sudo wget https://es.wordpress.org/latest-es_ES.zip```.

<img width="779" alt="Screen Shot 2022-11-18 at 2 47 00 PM" src="https://user-images.githubusercontent.com/66915274/202719349-442e9fd5-f96a-48af-8d7a-ea8a91a4d380.png">

4 ◦ Unzip the file you just downloaded with the command ```sudo unzip latest-en_US.zip```.

<img width="444" alt="Screen Shot 2022-11-18 at 2 47 25 PM" src="https://user-images.githubusercontent.com/66915274/202719435-99d6af72-98f4-47b0-befb-0f3e45db4520.png">

5 ◦ We will rename the folder html and call it html_old. ```sudo mv html/ html_old/```.

<img width="402" alt="Screen Shot 2022-11-18 at 2 48 21 PM" src="https://user-images.githubusercontent.com/66915274/202719636-8deea2b6-2953-43da-86a7-17f76c14440a.png">

6 ◦ Now we will rename the wordpress folder and call it html. ```sudo mv wordpress/ html```.

<img width="398" alt="Screen Shot 2022-11-18 at 2 48 49 PM" src="https://user-images.githubusercontent.com/66915274/202719749-4c914197-3891-4bcc-afb8-54c94b5f77cb.png">

7 ◦ Finally we will set these permissions on the html folder. We will use the command ```sudo chmod -R 755 html```. The number 7 indicates that the owner has read, write and execute permissions. The number 5 indicates that the group and others only have read and execute permissions.

<img width="396" alt="Screen Shot 2022-11-18 at 2 49 17 PM" src="https://user-images.githubusercontent.com/66915274/202719852-48b9ee14-3b15-49e2-bbd2-ca172a1f65ef.png">

### Mariadb

🧠 <b> What is MariaDB❓</b> It is a database. It is used for various purposes, such as data warehousing, e-commerce, enterprise-level functions, and logging applications. 

1 ◦ We will install the packages with the command ```sudo apt install mariadb-server```

<img width="797" alt="Screen Shot 2022-10-27 at 4 17 09 AM" src="https://user-images.githubusercontent.com/66915274/198175218-65dec75f-5727-425c-97d0-2baa2b8cd457.png">

2 ◦ Because the default configuration leaves your MariaDB installation unsecure, we will use a script provided by the mariadb-server package to restrict access to the server and remove unused accounts. We will run the script with the following command ```sudo mysql_secure_installation```. It will ask if we want to switch to Unix socket authentication. Since we already have a protected root account we will type ```N```.

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

Switch to unix_socket authentication? We choose ```N``` because we don't want it to switch to Unix socket authentication because we already have a protected root account.

Change the root password? We choose ```N```. We do not want to change the root password. By default we have no password but in mariadb he is not really root as we must give him administrator permissions.

Remove anonymous users? We choose ```Y```. By default when you install mariadb it has an anonymous user, which allows anyone to log into mariadb without having to create their own user account. This is designed for testing purposes and to make the installation smoother. When we leave the development environment and want to move to a production environment we must remove the anonymous users. 

Disallow root login remotely? Choose ```Y```. Disabling root login remotely will prevent anyone from guessing the root password. We will only be able to connect to root from localhost.

Remove test database and access to it? Choose ```Y```. This will remove the test database and any users who have access to it.

Reaload privilege tables now? Choose ```Y```. This will reload the MySQL permission tables so that the changes to the security settings will take effect immediately.

1 ◦ Once we have finished with the installation of mariadb we must create the database and the user for the WordPress. First we must access mariadb.

<img width="492" alt="Screen Shot 2023-03-31 at 12 16 28 AM" src="https://user-images.githubusercontent.com/66915274/228976032-2a3bd66e-ce88-4bc1-9264-1d5d7f88f295.png">

2 ◦ We create a database for the WordPress. In my case I'm going to call it wp_database. I will do all this with the command ```CREATE DATABASE wp_database;```.

<img width="384" alt="Screen Shot 2023-03-31 at 9 53 17 PM" src="https://user-images.githubusercontent.com/66915274/229216821-fba3d891-c477-4e68-9799-57bcb9efcde3.png">

3 ◦ To make sure that the database for WordPress has been created we can view all existing databases with the command ```SHOW DATABASES;```.

<img width="282" alt="Screen Shot 2023-03-31 at 9 54 04 PM" src="https://user-images.githubusercontent.com/66915274/229216973-fa35f5e1-04f1-4e56-8c44-55c4ad5a8745.png">

4 ◦ Next we need to create a user inside the database. We will use the command ```CREATE USER 'gemartin'@'localhost' IDENTIFIED BY '12345';```.

<img width="616" alt="Screen Shot 2023-03-31 at 9 56 59 PM" src="https://user-images.githubusercontent.com/66915274/229217478-6f7f5f3c-12cb-4d5a-981c-6fd53f884aa3.png">

5 ◦ We bind the new user to our database so that we grant him the necessary permissions to be able to work. We will use the command ```GRANT ALL PRIVILEGES ON wp_database.* TO 'gemartin'@'localhost';```.

<img width="669" alt="Screen Shot 2023-03-31 at 10 01 32 PM" src="https://user-images.githubusercontent.com/66915274/229218529-e2cdcb3f-f8bc-4474-8e7b-c1cf9499aa57.png">

6 ◦ We update the permissions for the changes to take effect with the command ```FLUSH PRIVILEGES;```.

<img width="321" alt="Screen Shot 2023-03-31 at 10 02 01 PM" src="https://user-images.githubusercontent.com/66915274/229218623-bad5faf3-231e-4472-a617-2ead2e713313.png">

7 ◦ Once we have completed the previous step, we can exit mariadb.

<img width="295" alt="Screen Shot 2023-04-01 at 10 43 40 PM" src="https://user-images.githubusercontent.com/66915274/229313206-36b09583-1930-4754-b70a-8d4caa38db9e.png">

### PHP

🧠 <b>What is PHP❓</b> It is a programming language. It is mainly used to develop dynamic web applications and interactive websites. PHP runs on the server side.

1 ◦ We install the necessary packages to be able to run web applications written in PHP language and that need to connect to a MySQL database. Run the following command ```sudo apt install php-cgi php-mysql```.

<img width="541" alt="Screen Shot 2023-03-31 at 10 07 04 PM" src="https://user-images.githubusercontent.com/66915274/229308102-24ddd152-8687-410d-b207-953d36c9b591.png">

### WordPress configuration

1 ◦ Access the /var/www/html directory with the command: ```cd /var/www/html```.

<img width="326" alt="Screen Shot 2023-04-01 at 8 26 46 PM" src="https://user-images.githubusercontent.com/66915274/229308150-88ec9c15-4791-4541-baf2-5d2267b94eec.png">

2 ◦ Copy the file wp-config-sample.php and rename it wp-config.php

<img width="616" alt="Screen Shot 2023-04-01 at 8 28 42 PM" src="https://user-images.githubusercontent.com/66915274/229308231-a022e3b4-1606-4958-b530-5b2ada908997.png">

3 ◦ Once we have renamed it we will edit the file wp-config.php ```nano wp-config.php``` and modify the following values.

<img width="841" alt="Screen Shot 2023-04-01 at 8 42 25 PM" src="https://user-images.githubusercontent.com/66915274/229308713-bbbb69f4-5f6c-4146-bc10-006cd968fb95.png">

You have to replace them with the values that we have previously set when we created the database and the user so that WordPress can connect and make use of it.

<img width="842" alt="Screen Shot 2023-04-01 at 8 46 08 PM" src="https://user-images.githubusercontent.com/66915274/229308845-4eac418d-c03f-48d1-9b74-463ef56a2ee5.png">

4 ◦ We enabled the fastcgi-php module in Lighttpd to improve the performance and speed of web applications on the server. ```sudo lighty-enable-mod fastcgi```

![image](https://user-images.githubusercontent.com/66915274/230748612-8253b2ee-15c6-42e0-8745-2148f48c6962.png)

5 ◦ We enabled the fastcgi-php module in Lighttpd to improve the performance and speed of PHP-based web applications on the server. ```sudo lighty-enable-mod fastcgi-php```

![image](https://user-images.githubusercontent.com/66915274/230748560-bd225efc-ea65-4a7d-bf08-eb72d61da58e.png)

6 ◦ We update and apply the changes in the configuration with the command ```sudo service lighttpd force-reload```.

![image](https://user-images.githubusercontent.com/66915274/230748835-9b44222d-e978-4a74-a501-e993c528a2a5.png)

7 ◦ Once we have completed the previous steps we can go back to our browser and type ```localhost```. You should see the following:

<img width="674" alt="Screen Shot 2023-04-01 at 8 49 00 PM" src="https://user-images.githubusercontent.com/66915274/229308949-6224a7c8-2dda-414a-b313-c14e981aca01.png">

<img width="1075" alt="Screen Shot 2023-04-01 at 8 00 38 PM" src="https://user-images.githubusercontent.com/66915274/229308962-d39b1b6b-62cc-49d1-ad13-a016d6e73683.png">

8 ◦ We must fill in all the fields. In my case I have put the following:

<img width="793" alt="Screen Shot 2023-04-01 at 8 02 29 PM" src="https://user-images.githubusercontent.com/66915274/229309346-c712fff4-1530-42c8-ad9e-a59f85d4de51.png">

9 ◦ Once we have filled in all the fields we must click on ```Install WordPress``` and we will have finished the installation. You will see the next tab. Now WordPress can create the tables and dump all the data it needs to work in the database we have assigned to it.

<img width="798" alt="Screen Shot 2023-04-01 at 8 02 52 PM" src="https://user-images.githubusercontent.com/66915274/229309399-719f525e-7859-468f-a9e6-6b6954102153.png">

10 ◦ If we access again to our localhost from the browser we can see our functional page.

<img width="2560" alt="Screen Shot 2023-04-01 at 9 02 51 PM" src="https://user-images.githubusercontent.com/66915274/229309529-96f3a1bb-d4a2-434f-bc01-2f2db0e0839d.png">

11 ◦ If we want to access the admin panel to make changes to our site we will have to put in the browser ```localhost/wp-admin``` and log in with our account.

<img width="368" alt="Screen Shot 2023-04-01 at 9 05 41 PM" src="https://user-images.githubusercontent.com/66915274/229309619-024d5dcc-ea8d-4895-88f3-bb65fcdca7e2.png">

<img width="359" alt="Screen Shot 2023-04-01 at 9 06 44 PM" src="https://user-images.githubusercontent.com/66915274/229309653-02e398e9-0c28-470e-825d-1431f7ca2bc2.png">

12 ◦ Once you have logged in, you can modify whatever you like. Customizing the page is optional, as it is not specified in the subject of this guide, we will not deal with it. 

<img width="1100" alt="Screen Shot 2023-04-01 at 9 07 38 PM" src="https://user-images.githubusercontent.com/66915274/229309676-b670be09-47dd-445f-969a-bb41131aa3f9.png">

### 8.3 - Aditional service ➕

### LiteSpeed ⚡️

🧠 <b> What is LiteSpeed❓</b> It is a proprietary web server software. It is the fourth most popular web server, and is estimated to be used by 10% of websites.

1 ◦ Before installing any software, it is important to ensure that the system is up to date.

```sudo apt update```

<img width="701" alt="Screen Shot 2022-11-25 at 2 59 17 AM" src="https://user-images.githubusercontent.com/66915274/203885206-209ac64f-51a3-42e4-814e-2063cf83a156.png">


```sudo apt upgrade```

<img width="507" alt="Screen Shot 2022-11-25 at 3 00 18 AM" src="https://user-images.githubusercontent.com/66915274/203885306-3b3eb6cd-64cb-4d34-967a-19e650286cf5.png">

2 ◦ By default, OpenLiteSpeed is available in the Debian 11 base repository. So, you must run the following command to add the OpenLiteSpeed repository to your Debian system:

```wget -O - http://rpms.litespeedtech.com/debian/enable_lst_debian_repo.sh | sudo bash```

As the command is long, I connected via ssh.

<img width="1129" alt="Screen Shot 2022-11-25 at 3 05 49 AM" src="https://user-images.githubusercontent.com/66915274/203885808-b4e0ff9a-580c-4121-b06f-ec229e514df9.png">

3 ◦ Again, we update the packages and install OpenLiteSpeed.

```sudo apt update```

<img width="627" alt="Screen Shot 2022-11-25 at 3 07 31 AM" src="https://user-images.githubusercontent.com/66915274/203885968-e0297682-b18c-4363-8fcb-7553cd908f91.png">

```sudo apt install openlitespeed```

<img width="801" alt="Screen Shot 2022-11-25 at 3 11 22 AM" src="https://user-images.githubusercontent.com/66915274/203886321-dbda490e-726d-4dfb-aa91-b9e10206976a.png">


4 ◦ The default password for OpenLiteSpeed is 123456. We will change the password to something more secure with the following command.

```sudo /usr/local/lsws/admin/misc/admpass.sh```

<img width="607" alt="Screen Shot 2022-11-25 at 3 12 33 AM" src="https://user-images.githubusercontent.com/66915274/203886432-cb14665f-63a0-4373-919d-0dff7c04b212.png">

5 ◦ We configure the firewall to allow connections through ports 8088 and 7080. We then add the rules in the port forwarding.

```sudo ufw allow 8088/tcp```

<img width="446" alt="Screen Shot 2022-11-25 at 3 15 39 AM" src="https://user-images.githubusercontent.com/66915274/203886798-41d4c14f-cb4a-4982-bd92-82ade321f244.png">

```sudo ufw allow 7080/tcp```

<img width="445" alt="Screen Shot 2022-11-25 at 3 15 59 AM" src="https://user-images.githubusercontent.com/66915274/203886833-f9016672-8fda-46fc-87a9-cd194de3cc1b.png">

```sudo ufw reload```

<img width="393" alt="Screen Shot 2022-11-25 at 3 16 18 AM" src="https://user-images.githubusercontent.com/66915274/203886863-03406d5c-456a-4e80-83e9-1bf3904154d3.png">

Port forwarding rules.

<img width="825" alt="Screen Shot 2022-11-25 at 3 16 52 AM" src="https://user-images.githubusercontent.com/66915274/203886923-1db4cf56-d197-4c41-87f6-846253e08450.png">


6 ◦ Once we have completed the previous step we can connect. We will put in the search engine of our browser ```localhost:7080``` we provide our login credentials and we will have access to everything.

<img width="800" alt="Screen Shot 2022-11-25 at 3 18 53 AM" src="https://user-images.githubusercontent.com/66915274/203887182-73d29abc-674c-4ace-bffb-de42b636ec38.png">

<img width="1206" alt="Screen Shot 2022-11-24 at 8 49 24 PM" src="https://user-images.githubusercontent.com/66915274/203856104-d4454636-2f45-4e51-8cf5-a1501398ea57.png">

<br>
<br>
<br>

#
# This tutorial has taken a lot of work, if you think it has been useful I would greatly appreciate a starred 🌟 so that it can be shared and help more students 👨🏻‍🎓❤️
<br>
<br>
<br>


## 9- Correction sheet ✅

<img width="854" alt="Screen Shot 2022-10-15 at 10 29 57 PM (1)" src="https://user-images.githubusercontent.com/66915274/200190182-65e895a8-b612-49d0-b8d5-a2452a2ff8ba.png">

<img width="854" alt="Screen Shot 2022-10-15 at 10 30 26 PM" src="https://user-images.githubusercontent.com/66915274/200190188-d0ac23cb-b66c-437a-b4c2-27390e07a2ed.png">

<img width="854" alt="Screen Shot 2022-10-15 at 10 30 57 PM" src="https://user-images.githubusercontent.com/66915274/200190198-c6f69628-dda3-4fc3-8c33-1de39f2e7ba8.png">

<img width="854" alt="Screen Shot 2022-10-15 at 10 31 12 PM" src="https://user-images.githubusercontent.com/66915274/200190210-c7dda7e8-8776-461f-8fd9-1e59a5f024c6.png">

## 9.1 Evaluation answers 💯

### ▪️ What is a virtual machine❓

It is software that simulates a computer system and can run programs as if it were a real computer. It allows the creation of multiple simulated environments or dedicated resources from a single physical hardware system. 

### ▪️ Why you have chosen Debian❓

This is a personal thing for everyone, my opinion: The subject itself explains that it is easier to do it in Debian and if you look for documentation/tutorials there are many and all of them have been done in debian.

### ▪️ Basic differences between CentOS and Debian

![182516961-c3e4da77-2db8-4737-a68f-27b033908705 (1) (1)](https://user-images.githubusercontent.com/66915274/182517306-edb92eac-cba4-444a-83f8-9692bac69231.png)

### ▪️ What is the purpose of virtual machines❓

Their purpose is to provide a hardware platform and operating system independent execution environment, which hides the details of the underlying platform and allows a program to always run the same way on any platform.

### ▪️ Differences between apt and aptitude ↙️

Aptitude is an enhanced version of apt. APT is a lower-level package manager and aptitude is a high-level package manager. Another big difference is the functionality offered by both tools. Aptitude offers better functionality compared to apt-get. Both are able to provide the necessary means to perform package management. However, if you are looking for a more feature-rich approach, Aptitude should be it.

### ▪️ What is APPArmor❓

A security module in the Linux kernel that allows the system administrator to restrict the capabilities of a program.

### ▪️ What is LVM❓

It is a logical volume manager. It provides a method for allocating space on mass storage devices, which is more flexible than conventional partitioning schemes for storing volumes.

## 9-2 Evaluation commands ⌨️

1 ◦ Verify that no graphical interface is in use.

We will use the command ```ls /usr/bin/*session``` and it should give the same result as in the screenshot. If anything different appears, a graphical interface is being used.

<img width="352" alt="Screen Shot 2022-11-25 at 12 00 02 AM" src="https://user-images.githubusercontent.com/66915274/203872315-0e87428b-5c5a-475b-9d7c-350eafbe3bea.png">

2 ◦ Check that the UFW service is in use.

```sudo ufw status```

<img width="326" alt="Screen Shot 2022-11-24 at 1 25 06 AM" src="https://user-images.githubusercontent.com/66915274/203668014-bd228793-3532-4494-8b01-d046e4930c10.png">

```sudo service ufw status```

<img width="720" alt="Screen Shot 2022-11-24 at 1 25 37 AM" src="https://user-images.githubusercontent.com/66915274/203668066-6a3420d4-ae72-4263-8474-2e4946e2367a.png">

3 ◦ Check that the SSH service is in use.

```sudo service ssh status```

<img width="711" alt="Screen Shot 2022-11-24 at 1 26 43 AM" src="https://user-images.githubusercontent.com/66915274/203668165-e642c21f-a11e-48b1-bed5-83639445251e.png">

4 ◦ Check that you are using the Debian or Centos operating system.

```uname -v``` o ```uname --kernel-version```

<img width="306" alt="Screen Shot 2022-11-24 at 1 37 17 AM" src="https://user-images.githubusercontent.com/66915274/203669122-0be5033c-c882-4a2e-bf22-6a680f998a56.png">

5 ◦ Check that your user is within the "sudo" and "user42" groups.

```getent group sudo```

```getent group user42```

<img width="314" alt="Screen Shot 2022-11-24 at 3 26 30 AM" src="https://user-images.githubusercontent.com/66915274/203680444-5fb18ae1-724e-4f78-a77f-a0f5bcc04913.png">

6 ◦ Create a new user and show that it follows the password policy we have created.

```sudo adduser name_user``` and enter a password that follows the policy.

<img width="465" alt="Screen Shot 2022-11-24 at 3 29 45 AM" src="https://user-images.githubusercontent.com/66915274/203680847-b4555fd4-f847-4bce-b944-edf3e7720c99.png">

7 ◦ We create a new group named "evaluating".

```sudo addgroup evaluating```

<img width="363" alt="Screen Shot 2022-11-24 at 3 30 47 AM" src="https://user-images.githubusercontent.com/66915274/203680980-784b2b60-82f4-405a-9f07-ec4948e86868.png">

8 ◦ We add the new user to the new group.

```sudo adduser name_user evaluating```

<img width="411" alt="Screen Shot 2022-11-24 at 3 33 08 AM" src="https://user-images.githubusercontent.com/66915274/203681233-096b200a-2b99-4638-81f3-a3bff046c0db.png">

To verify that it has been entered correctly.

<img width="356" alt="Screen Shot 2022-11-24 at 3 33 31 AM" src="https://user-images.githubusercontent.com/66915274/203681267-106e4d37-0ec4-4006-95a4-88dd7109c4b6.png">

9 ◦ Check that the machine's hostname is correct login42.

<img width="224" alt="Screen Shot 2022-11-24 at 3 37 27 AM" src="https://user-images.githubusercontent.com/66915274/203681701-4f9b9ff1-28b6-4d06-9489-f930eee4b6e5.png">


10 ◦ Modify hostname to replace your login with the evaluator's. In this case, we will replace it with student42.

```sudo nano /etc/hostname``` and replace our login with the new one.

<img width="445" alt="Screen Shot 2022-11-24 at 3 42 30 AM" src="https://user-images.githubusercontent.com/66915274/203682323-dfd14846-9c98-48d0-9c83-56739de3220b.png">

<img width="525" alt="Screen Shot 2022-11-24 at 3 43 47 AM" src="https://user-images.githubusercontent.com/66915274/203682470-598a9dbf-ef28-4ef5-86cf-8caeef083ec3.png">

```sudo nano /etc/hosts``` and replace our login with the new one.

<img width="418" alt="Screen Shot 2022-11-24 at 3 44 08 AM" src="https://user-images.githubusercontent.com/66915274/203682512-5dd1452d-a704-466b-b9e1-89aa472fada6.png">

<img width="512" alt="Screen Shot 2022-11-24 at 3 44 35 AM" src="https://user-images.githubusercontent.com/66915274/203682562-36741000-6203-4a98-9de7-53afb24d6ea2.png">

Reboot the machine.

<img width="358" alt="Screen Shot 2022-11-24 at 3 44 58 AM" src="https://user-images.githubusercontent.com/66915274/203682614-60b10a36-c5d9-478b-a119-73e32a87b7fb.png">

Once we have logged in again, we can see how the hostname has been changed correctly.

<img width="263" alt="Screen Shot 2022-11-24 at 3 46 30 AM" src="https://user-images.githubusercontent.com/66915274/203682819-bd35ff17-3810-4644-9c44-93957e41d181.png">

11 ◦ Check that all partitions are as indicated in the subject.

```lsblk```

<img width="495" alt="Screen Shot 2022-11-24 at 3 52 17 AM" src="https://user-images.githubusercontent.com/66915274/203683496-b49a7ada-2a0c-4f87-a013-e307370b3900.png">

12 ◦ Check that sudo is installed.

```which sudo```

<img width="275" alt="Screen Shot 2022-11-24 at 4 00 42 AM" src="https://user-images.githubusercontent.com/66915274/203684520-1340d8dc-1b13-4828-9056-2631e659ddcf.png">

Using which is not actually a good practice as not all packages are found in the paths where which searches. However, for the evaluation it is better as it is a simple and easy-to-learn command. For better use, we will use the following command:

```dpkg -s sudo```

<img width="789" alt="Screen Shot 2022-11-24 at 4 02 13 AM" src="https://user-images.githubusercontent.com/66915274/203684698-d66c3c5b-2d6b-43c5-8f63-1a3cddaf7b4d.png">

13 ◦ Add the new user to the sudo group.

```sudo adduser name_user sudo```

<img width="468" alt="Screen Shot 2022-11-24 at 5 02 24 AM" src="https://user-images.githubusercontent.com/66915274/203691378-2f2f5309-e650-486e-9cd6-cae4dec2ffa6.png">

We check that it is within the group.

 <img width="415" alt="Screen Shot 2022-11-24 at 5 02 39 AM" src="https://user-images.githubusercontent.com/66915274/203691402-6b84f333-10f7-4908-8255-652613afeede.png">

14 ◦ Show the application of the rules imposed for sudo by the subject.

<img width="503" alt="Screen Shot 2022-11-24 at 5 12 02 AM" src="https://user-images.githubusercontent.com/66915274/203692615-bc1ec51c-ae5f-444f-9577-39b01112c969.png">

<img width="762" alt="Screen Shot 2022-11-24 at 5 12 17 AM" src="https://user-images.githubusercontent.com/66915274/203692638-e6de6cba-ad42-48b9-ac84-21e2b8c50563.png">

15 ◦ Show that the path /var/log/sudo/ exists and contains at least one file, in this we should see a history of the commands used with sudo.

<img width="295" alt="Screen Shot 2022-11-24 at 5 17 54 AM" src="https://user-images.githubusercontent.com/66915274/203693244-39cb5903-7934-4f8a-8c39-f4ad94d305fb.png">

<img width="643" alt="Screen Shot 2022-11-24 at 5 19 07 AM" src="https://user-images.githubusercontent.com/66915274/203693358-b8a2832e-a80d-4304-b3be-43680ab9ba6d.png">

Run a command with sudo and check that the file is updated.

<img width="439" alt="Screen Shot 2022-11-24 at 5 23 08 AM" src="https://user-images.githubusercontent.com/66915274/203693791-21697c05-5087-4494-92ed-56ef9680f9fc.png">

<img width="661" alt="Screen Shot 2022-11-24 at 5 23 21 AM" src="https://user-images.githubusercontent.com/66915274/203693816-be7f7b83-d492-4d01-89cf-abff01d07d96.png">

16 ◦ Check that the UFW program is installed on the virtual machine and check that it works correctly.

```dpkg -s ufw```

<img width="730" alt="Screen Shot 2022-11-24 at 5 24 47 AM" src="https://user-images.githubusercontent.com/66915274/203693974-9e37e6d4-13a1-45b9-bb0d-03960a072694.png">

```sudo service ufw status```

<img width="704" alt="Screen Shot 2022-11-24 at 5 25 49 AM" src="https://user-images.githubusercontent.com/66915274/203694095-3bcf3a2e-04b8-4d63-a55c-b1e952e52dad.png">

17 ◦ List the active rules in UFW, if the bonus part is not done, the rule for port 4242 should only appear.

```sudo ufw status numbered```

<img width="500" alt="Screen Shot 2022-11-24 at 5 27 50 AM" src="https://user-images.githubusercontent.com/66915274/203694334-08b7791e-c7b6-4325-be60-7dc4e0257411.png">

18 ◦ Create a new rule for port 8080. Verify that it has been added to the active rules and then you can delete it.

```sudo ufw allow 8080``` to create it.

<img width="327" alt="Screen Shot 2022-11-24 at 5 31 35 AM" src="https://user-images.githubusercontent.com/66915274/203694718-09ae8097-e636-477d-bdc7-2d45ce892b72.png">

```sudo ufw status numbered```

<img width="473" alt="Screen Shot 2022-11-24 at 5 31 59 AM" src="https://user-images.githubusercontent.com/66915274/203694782-4f70c4a5-0de2-41ea-aba7-b1887e1fd517.png">

To delete the rule, we must use the command. ```sudo ufw delete num_rule```

<img width="308" alt="Screen Shot 2022-11-24 at 5 33 15 AM" src="https://user-images.githubusercontent.com/66915274/203694914-82ae09cc-7e96-47db-b5ea-89e496f57db6.png">

We check that it has been deleted and we see the number of the next rule that needs to be deleted..

<img width="467" alt="Screen Shot 2022-11-24 at 5 33 41 AM" src="https://user-images.githubusercontent.com/66915274/203694968-623554d2-f9c6-42db-aa34-c3c627b45f8e.png">

Delete the new rule.

<img width="308" alt="Screen Shot 2022-11-24 at 5 34 03 AM" src="https://user-images.githubusercontent.com/66915274/203695003-deccc02f-ffc9-445a-a202-48b57cb66545.png">

We check that only the required rules in the subject remain.

<img width="461" alt="Screen Shot 2022-11-24 at 5 34 11 AM" src="https://user-images.githubusercontent.com/66915274/203695013-6b9ff40b-d23f-4a95-9694-f4e73e17f252.png">

19 ◦ Check that the ssh service is installed on the virtual machine, that it works correctly, and that it only works on port 4242.

```which ssh```

<img width="235" alt="Screen Shot 2022-11-24 at 5 37 25 AM" src="https://user-images.githubusercontent.com/66915274/203695373-c1cf2aca-15d5-4e7d-8c13-6e327824ae2c.png">

```sudo service ssh status```

<img width="616" alt="Screen Shot 2022-11-24 at 5 40 34 AM" src="https://user-images.githubusercontent.com/66915274/203695746-b8a3235d-6084-40c6-8cc0-83e78d0b497c.png">

20 ◦ Use ssh to log in with the newly created user. Make sure that you cannot use ssh with the root user.

We try to connect over ssh with the root user but we do not have permission.

<img width="1377" alt="Screen Shot 2022-11-24 at 5 44 07 AM" src="https://user-images.githubusercontent.com/66915274/203696165-f1107b33-0c7e-4cce-8d04-56b845637ec8.png">

We connect via ssh with the new user using the command ```ssh newuser@localhost -p 4242```

<img width="1384" alt="Screen Shot 2022-11-24 at 5 48 06 AM" src="https://user-images.githubusercontent.com/66915274/203696612-f2c98ebf-be55-4830-b5ea-b0ac98de7c65.png">

21 ◦ Modify the runtime of the script from 10 minutes to 1.

We run the following command to modify the crontab file ```sudo crontab -u root -e```

<img width="455" alt="Screen Shot 2022-11-24 at 6 30 57 AM" src="https://user-images.githubusercontent.com/66915274/203701854-956c27de-367f-4b54-b21f-8a892d4891d4.png">

We modify the first parameter, instead of 10 we change it to 1.

<img width="638" alt="Screen Shot 2022-11-24 at 6 31 44 AM" src="https://user-images.githubusercontent.com/66915274/203701944-393bd687-8b9c-4643-9d59-4789361e314d.png">

22 ◦ Translate English: Finally, make the script stop running when the server has started, but without modifying the script.

```sudo /etc/init.d/cron stop```

<img width="483" alt="Screen Shot 2022-11-24 at 3 25 53 PM" src="https://user-images.githubusercontent.com/66915274/203807610-d87124f2-47ca-4546-8037-b904e8bcf5d1.png">

Si queremos que vuelva a ejecutarse:

```sudo /etc/init.d/cron start```

<img width="483" alt="Screen Shot 2022-11-24 at 3 27 38 PM" src="https://user-images.githubusercontent.com/66915274/203807970-8fc69a39-6d10-4e64-9be1-eb49c4bf95f8.png">

## 10- Tester 🆗

Check that you didn't forget anything! Own tester to check that the installation and configuration has been carried out successfully.

[HERE](https://github.com/gemartin99/Born2beroot-Tester)

<img width="440" alt="Screen Shot 2023-03-09 at 3 40 54 AM" src="https://user-images.githubusercontent.com/66915274/223902066-f2f6a059-9df8-4e32-a92a-14c43ff8fb0f.png">

### Partner 👨🏻‍💻

This English version of the guide would not have been possible without the help of [ElPatatin](https://github.com/ElPatatin)

◦ Linkedin: https://www.linkedin.com/in/cristope/

◦ Intra profile: https://profile.intra.42.fr/users/cpeset-c

# Contact 📥

### Contact me if you think I can improve the tutorial! It may help future students! 😁

◦ Email: gemartin@student.42barcelona.com

◦ Linkedin: https://www.linkedin.com/in/gemartin99/

# You might be interested!

### - To see my progress in the common core 42 ↙️

[HERE](https://github.com/gemartin99/42cursus)

### - My profile on the intra 42 ↙️
[HERE](https://profile.intra.42.fr/users/gemartin)
