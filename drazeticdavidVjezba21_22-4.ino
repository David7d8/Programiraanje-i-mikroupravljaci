char oznaka = "T";   //znak, dovoljno je char
bool termicka_zastita = false;  //bool jer je true ili false
unsigned int ulazni_napon = 12500;  //veliki cijeli broj samo pozitivni
unsigned int izlazni_napon = 5000;  //veliki cijeli broj samo pozitivni
unsigned int struja_mA = 450;   // cijeli broj do 65535
unsigned long vrijeme_rada = 86400; // preveliko za običan int treba dulja

float U_pad;
float P_dis;
unsigned long E_toplina;
unsigned int ukupno_bajtova;

void setup() {
  Serial.begin(9600);

  U_pad = (ulazni_napon - izlazni_napon) / 1000.0;
  Serial.print("Pad napona (V): ");
  Serial.println(U_pad, 2);

  P_dis = U_pad * (struja_mA/1000.0);
  Serial.print("Snaga (W): ");
  Serial.println(P_dis, 3);

  E_toplina = (unsigned long)(P_dis * vrijeme_rada);
  Serial.print("Ukupna toplinska energija(J): ");
  Serial.println(E_toplina);

  int ukupno_bajtova1= sizeof(oznaka) + sizeof(termicka_zastita) + sizeof(ulazni_napon) + sizeof(izlazni_napon) + sizeof(struja_mA) + sizeof(vrijeme_rada);
  int ukupno_bajtova2= ukupno_bajtova1 +  sizeof(U_pad) + sizeof(P_dis) + sizeof(E_toplina);
  
  Serial.print("Ukupno zauzece SRAM-a: [");
  Serial.print(ukupno_bajtova2);
  Serial.println("] bajtova od 2048 B.");

}

void loop() {
  // put your main code here, to run repeatedly:

}
