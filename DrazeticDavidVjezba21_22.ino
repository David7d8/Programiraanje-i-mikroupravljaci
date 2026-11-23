unsigned long otporR = 100000;
float kapacitet =47e-6;
float tau;
float vrijemePunjenja;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  tau = otporR * kapacitet;
  Serial.print("tau:  ");  Serial.print(tau, 3);
  vrijemePunjenja = 5 * tau;
  Serial.print("Vrijeme punjenja:   ");
  Serial.print(vrijemePunjenja, 2);


}

void loop() {
  // put your main code here, to run repeatedly:

}
