package ciem;
public class Internals extends CIE{
    public static int[] cieMarks = new int[5];
    public Internals(int usn,String name,int sem,int[] cieMarks){
        super( usn,name,sem );
        this.cieMarks = cieMarks;
    }
}