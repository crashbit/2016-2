# Sistema básico de registro y autenticado
Este ejemplo permite registrar usuarios, poder iniciar sesión, cerrar sesión, además permite la manipulación del menu principal para saber el estado del usuario.

Se incluyen los siguientes scripts:
- db_create.py 	Crea la BD en formato msqlite
- db_migrate.py Sirve para actualizar la BD cada vez que se crear o modifica un modelo `models.py`
- db_upgrade.py Sirve para mover de versión su BD en caso de que hayan aplicado un downgrade
- db_downgrade.py Sirve para regresar a una versión anterior de la BD
- requirements.txt Contiene la lista de extensiones y paquetes que deben instalarse
- run.py Es el archivo principal que nos permitirá ejecutar este demo

Instalación
-----------
Procedimiento básico (se requiere de unix, linux o C9.io), una vez que se ha bajado el archivo, se debe descomprimir y entrar al directorio que se genera (forms-orm-bd)::

	cd forms-orm-bd

Una vez dentro del directorio se procede a crear el ambiente virtual de ejecución::

	virtualenv venv

Activamos el ambiente virtual::

	source venv/bin/activate

Ahora, una vez activado el ambiente virtual, instalamos los paquetes y extensiones necesarias::

	pip install -r requirements.txt

Ya instalados los requerimientos, procedemos a ejecutar la demo::

	./run.py

Uso
----
Para poder usarlo basta con usar un navegador de internet y teclear la siguiente dirección::

	http://127.0.0.1:5000/

Esto nos mostrará el sistema en ejecución, sin embargo tenemos un módulo de administración::

	http://127.0.0.1:5000/admin

Aquí podemos ver el panel de administración de nuestro sistema

Paquetería o extensiones instaladas
------------------------------------
	


