/* Arduino Tutorial - Watel Level Sensor 40mm
   More info: */

const int read = A0; //conectar el pin A0 del sensor al pin A0 del Arduino
int value;          //Variable para guardar la información

void setup()
{
 
  Serial.begin(9600);
  
}

void loop()
{
  value = analogRead(read); 
  
  if (value<=los valor análogo del sensor que marca vacío){ 
    Serial.println("nivel de agua vacío"); 
  }
  else if (value>valor análogo && value<=valor análogo de llenado){ 
    Serial.println("nivel de agua"); 
  }

  else if (value ==valor análogo de llenado){ 
    Serial.println("tanque lleno"); 
  }

