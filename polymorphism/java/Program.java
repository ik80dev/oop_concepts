package pl.home.oop;

import java.util.*;

class Event {}

enum OpType{
    OP1,
    OP2,
    OP3
}


abstract class CAGeneric<T> {
    public T add(){ return null;};
}

interface IStruct {
    public void pack();
    public void unpack();
}

interface IShape extends IStruct {
   public void draw();
}


class CSquare implements IShape {
   public void draw(){
        System.out.println("Drawing CSquare");
    }

    public void pack() {}
    public void unpack() {}

}

class CCircle  extends CAGeneric<Event> implements IShape{
   public void draw() {
        System.out.println("Drawing CCircle");
    }

        public void pack() {}
        public void unpack() {}

        public Event add(){ return new Event();}
}

public class Program {

public static void main(String[] args) {

    List<IShape> shapes = new ArrayList<IShape>();
    
    CCircle c = new CCircle();
    Boolean isObject = c instanceof Event;
    System.out.println(isObject);

    shapes.add(new CSquare());
    shapes.add(new CCircle());

    for(int i=0; i<shapes.size(); i++) shapes.get(i).draw();

    System.out.println("Entry point");

}

}