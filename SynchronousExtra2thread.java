class car_queue {

int n ;

boolean valueSet = false;

synchronized int get() {

while(!valueSet)

try {

wait();

} catch(InterruptedException e) {

System.out.println("InterruptedExceptioncaught");

}

System.out.println("Got request: " + n);

valueSet = false;

notify();

return n;
}
synchronized void put(int n) 
{

while(valueSet)

try {

wait();

} catch(InterruptedException e) {

System.out.println("InterruptedExceptioncaught");

}

this.n = n;

valueSet = true;

System.out.println("Put request : " + n);

notify(); } }
class car_owner implements Runnable {

car_queue q;

car_owner(car_queue q) {

this.q = q;

new Thread(this, "car_owner").start();

}

public void run() {

int i = 0;

while(true) {

q.put(i++); } } }

class car_machinic implements Runnable {

car_queue q;

car_machinic(car_queue q) {

this.q = q;

new Thread(this, "car_machinic").start();

}

public void run() {

while(true) {

q.get();

}

}

}

public class main {

public static void main(String args[]) {

car_queue q = new car_queue();

new car_owner(q);

new car_machinic(q);

System.out.println("Press Control-C to stop.");

}

}
