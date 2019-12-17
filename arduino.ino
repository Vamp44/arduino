const int list1[26][4] = {{0,1,-1,-1},
                     {1,0,0,0},
                     {1,0,1,0},
                     {1,0,0,-1},
                     {0,-1,-1,-1},
                     {0,0,1,0},
                     {1,1,0,-1},
                     {0,0,0,0},
                     {0,0,-1,-1},
                     {0,1,1,1},
                     {1,0,1,-1},
                     {0,1,0,0},
                     {1,1,-1,-1},
                     {1,0,-1,-1},
                     {1,1,1,-1},
                     {0,1,1,0},
                     {1,1,0,1},
                     {0,1,0,-1},
                     {0,0,0,-1},
                     {1,-1,-1,-1},
                     {0,0,1,-1},
                     {0,0,0,1},
                     {0,1,1,-1},
                     {1,0,0,1},
                     {1,0,1,1}};
const char list2[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
const char s[20] = {'H','E','L','L','O','#'};

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
}

void loop() {
  // put your main code here, to run repeatedly:
  int i = 0;
  while(s[i] != '#'){
    for(int j = 0; j < 26; j++){
      if(s[i] == list2[j]){
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
