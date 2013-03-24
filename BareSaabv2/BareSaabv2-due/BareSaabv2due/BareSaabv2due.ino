
int I = 0;
int Ib = 0;
int Ix = 0;
int Ia = 0;
int Ne = 0;
int Nex = 0;
int Nea = 0;
int Neb = 0;
int Ney = 0;
int y = 0;

int enginespeed = 10;
int PF = 8;
int VR = 4;
int val = 0;

int ne[] = {
  0,1000,2000,3000,4000,5000};
int ip[] = {
  0,300,400,800,1000,1000};

void setup() {

  Serial.begin(115200);

  pinMode(VR, OUTPUT);

}

void loop() {  

  analogReadResolution(12);

  Nex = analogRead(enginespeed);
  val = analogRead(VR);

goto1:

  y = 0;

  if ((Nex >= ne[y]) && (Nex <= ne[y+1])) 
  {
    goto goto2;
  }
  else
    y = y + 1;
  {
    goto goto1;
  }

goto2:

  Ia = ip[y];
  Ib = ip[y + 1];
  Nea = ne[y];
  Neb = ne[y + 1];  

  if (y >= 6)
  {
    y = 0;
    goto goto1;
  }

  digitalWrite(PF, HIGH);
  delay (val / 100);
  digitalWrite(PF, LOW);
  delay ((1023 - val) / 100);


  Serial.println(val);
  Serial.println(Nex);
}




