/* Shortest Job First */

void setup() {
  pinMode(7, OUTPUT); 
  pinMode(6, OUTPUT); 
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT); 
  pinMode(3, OUTPUT); 
  pinMode(2, OUTPUT);
}

void loop()
{
  shortest_job(); 
}

void shortest_job(){
  int pin[6] = {7, 6, 5, 4, 3, 2};
  int time[6] = {2000, 4000, 3000, 5000, 4000, 7000}; /* array of delay time in seconds */

  int temp, i, j;
   for (i = 0; i < 6; i++) {
    for (j = 0; j < 6; j++) {
      if (time[i] < time[j]) {
      	temp = time[i];
        time[i] = time[j];
        time[j] = temp;
        
        temp = pin[i];
        pin[i] = pin[j];
        pin[j] = temp;
      }
    }
  } 
  
  int count = 0;
  while (count != 6) {
  	digitalWrite(pin[count], HIGH);
    delay(time[count]);
    digitalWrite(pin[count], LOW);
    count++;
  } /* executes shortest job scheduling */
}
