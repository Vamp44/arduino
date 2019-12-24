const char list2[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
const int list1[26][4] = {{0,1,-1,-1},//A
                     {1,0,0,0},       //B
                     {1,0,1,0},       //C
                     {1,0,0,-1},      //D
                     {0,-1,-1,-1},    //E
                     {0,0,1,0},       //F
                     {1,1,0,-1},      //G
                     {0,0,0,0},       //H
                     {0,0,-1,-1},     //I
                     {0,1,1,1},       //J
                     {1,0,1,-1},      //K
                     {0,1,0,0},       //L
                     {1,1,-1,-1},     //M
                     {1,0,-1,-1},     //N
                     {1,1,1,-1},      //O
                     {0,1,1,0},       //P
                     {1,1,0,1},       //Q
                     {0,1,0,-1},      //R
                     {0,0,0,-1},      //S
                     {1,-1,-1,-1},    //T
                     {0,0,1,-1},      //U
                     {0,0,0,1},       //V
                     {0,1,1,-1},      //W
                     {1,0,0,1},       //X
                     {1,0,1,1},       //Y
                     {1,1,0,0}};      //Z
const String s = "Hello";

void output(int i)
{
    for(int j = 0; j < 4; j++){
      if(list1[i][j] == 0){
        digitalWrite(13,HIGH);
        delay(300);
        digitalWrite(13,LOW);
        delay(100);
      }
      if(list1[i][j] == 1){
        digitalWrite(13,HIGH);
        delay(900);
        digitalWrite(13,LOW);
        delay(100);
      }
    }
}

void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT);
  digitalWrite(13,LOW);
  delay(50);
  for(int j = 0; j <= 6; j++){
    digitalWrite(13,HIGH);
    delay(50);
    digitalWrite(13,LOW);
    delay(50);
  }
  digitalWrite(13,LOW);
  delay(400);
}

void loop() {
  // put your main code here, to run repeatedly:
  int i = 0;
  while(s[i] != '\0'){
    for(int j = 0; j < 26; j++){
      if(s[i] == list2[j]){
        output(j);       
      }
      if(s[i] == list2[j] + 32){
        output(j); 
      }
    }
    i++;
  }
  delay(400);
  for(int j = 0; j <= 3; j++){
    digitalWrite(13,HIGH);
    delay(50);
    digitalWrite(13,LOW);
    delay(50);
  }
  delay(400);
}
