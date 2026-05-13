## NominasPOO / RESPUESTAS Y EVIDENCIAS
_____________________________________________________________________________________________________________________


## __Evidencias__

__1.__ Evidencia de funcionamiento con 8 empleados.

<img width="788" height="374" alt="image" src="https://github.com/user-attachments/assets/9defc78a-3ed0-4e54-9761-3aa1b12b13ff" />

__2.__ Evidencia de sueldos bases.

<img width="616" height="236" alt="image" src="https://github.com/user-attachments/assets/ffe1ad7a-27d8-428f-8406-19aa1de0241b" />

## __Explicacion del diseño.__

   __1.1__  La clase base o la clase padre seria empleados ya que de esta se derivan los atributos generales para los empleados, funcionando esta como un molde para cada puesto.

<img width="824" height="166" alt="image" src="https://github.com/user-attachments/assets/c9f84d4f-5969-4a21-8acc-6339a91748e4" />

<img width="560" height="356" alt="image" src="https://github.com/user-attachments/assets/a941b87f-d81c-43fd-b824-420f6ca730e4" />

   __1.2__ Se sobrescribe el metodo de calcularsalario() ya que cada clase hija lo modifica o redefine a su necesidad para poder aplicar los adicionales de cada puesto.
   
  Ejemplos:

<img width="427" height="237" alt="image" src="https://github.com/user-attachments/assets/190473b1-7681-4b2c-8de1-fad58911290b" />

<img width="431" height="240" alt="image" src="https://github.com/user-attachments/assets/041e0012-3304-455a-8e28-eb08fda6ce39" />


   __1.3__ El polimorfismo se presenta en el view ya que tratas a todos como empleados de forma generica pero el programa es lo suficientemente inteligente para saber que cada uno tiene su propia formula para calcular el sueldo.

   
   <img width="1137" height="480" alt="image" src="https://github.com/user-attachments/assets/9be9d16a-809d-46d7-ab69-6d4991e10a34" />


   __1.4__ Aunque se podria hacer seria algo no escalable ya que tocaria para agregar empleados o sueldos una constante modificacion al codigo para poder hacer esto posible.

## __Dificultades__

 __1.__ Una de las dificultades que tuve fue al conectar las clases, ya que en el momento de iniciar desde el main el programa me aparecian multiples errores pero todos se derivaban del View.h por lo cual se me hizo un poco extraño porque en ese momento pensaba que no le faltaba nada y que el error estaba en otro lado, asumiendo que codeblocks se habia equivocado, luego de intentar moviendo cosas y dañandolas mas decidi reestablecer todo como estaba y mover solo en el view.h, al intentar mover cosas volvi a leer el erro que me aparecia y me di cuenta de que estaba fallando, lo que le faltaba al codigo era incluir a Nomina.H y luego de pensarlo criticamente me di cuenta que era un poco obvio ya que si no se incluia por ende el View.h no iba a tener la suficiente informacion para poder funcionar de manera correcta.
   
<img width="1035" height="332" alt="image" src="https://github.com/user-attachments/assets/080929d5-46cf-4b96-b8d0-7d4fca26cfe8" />
(Foto del error por no escribir el #include "Nomina.h")

__2.__ Otra dificultad que se me presento fue cuando estaba creando la parte de getpuesto para que esta se imprimiera al final ya que habia modificado las cpps de todas las clases hijas y de la clase padre pero me salte un pequeño detalle,el cual era declarlo en el .h, este error no me tomo tanto tiempo como el pasado solucionarlo ya que era algo mas general y mas sencillo de encontrar donde habia fallado  ya que el codeblocks me marcaba explicitamente no declaration matches 'std::string ClassName::getPuesto()'.

<img width="1112" height="298" alt="image" src="https://github.com/user-attachments/assets/4cad065b-8697-4a14-a7cd-2dbbddef54e1" />
(Foto donde se ve el error que saltaba al ejecutarlo)

__3.__ Un error el cual me ocurrio que fue algo mas de archivos llamado segun lo que busque fue el error "Undefined Reference" el cual estaba sucediendo porque habia dejado un archivo .cpp por fuera de la carpeta del proyecto y en apliaciones como codeblocks toca que todas esten en la misma carpeta de proyecto ya que no hay cmakelist, asi que por culpa de este mal enlazamiento el programa no corria y aparecia que no estaba el archivo, para corregirlo fue sencillo ya que era solo meter el .cpp faltante a la carpeta del proyecto.

## __Uso de IA__

En este proceso de resolver esta practica yo aplicaria a la opcion B ya que la use en diferentes momentos los cuales fueron.

__1.__ Encontrar el porque de errores y tener mayor claridad

<img width="789" height="362" alt="image" src="https://github.com/user-attachments/assets/059ab183-e140-4718-94b5-7623550146f6" />
(Esta fue luego de haber encontrado el error por mis medios pero para generar una confirmacion)
<img width="925" height="319" alt="image" src="https://github.com/user-attachments/assets/6e90fb58-25cc-44fb-9250-39974ca966e6" />
(Esta fue unicamente para saber el nombre tecnico del error ya que no sabia como describirlo en los errores)


__2.__ Mejora y del codigo visualmente 

Lo use para guiarme como mejorar visualmente lo que es el view, pero le pedi exclusivamente que me ayudara a mejorar lo visual el codigo que imprime y hace calculos no se toco.
Abjunto el antes y depues.

<img width="612" height="241" alt="image" src="https://github.com/user-attachments/assets/21355adb-7c93-49f1-b831-9662b8c4923d" />
<img width="958" height="367" alt="image" src="https://github.com/user-attachments/assets/a9470e56-ac4b-45cd-9ed8-cf49a159bfe4" />

(Antes)

<img width="788" height="374" alt="image" src="https://github.com/user-attachments/assets/9defc78a-3ed0-4e54-9761-3aa1b12b13ff" />
<img width="1182" height="479" alt="image" src="https://github.com/user-attachments/assets/af935c5c-f55e-4566-acbb-e000e4b5c762" />

(despues)

lo unico que hice con esto fue agregar el iomanip el cual me recomendo gemini para mejorar el orden a la hora de imprimir 
