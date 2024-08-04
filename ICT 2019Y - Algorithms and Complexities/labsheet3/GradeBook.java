// public class GradeBook {
//     private String moduleName;
//     private double mark;
//     public GradeBook() {
//     moduleName = "Algorithms and Complexities";
//     mark = 100;
//     }
//     public GradeBook(String moduleName, double mark) {
//     this.moduleName = moduleName;
//     this.mark = mark;
//     }
//     public void setModuleName(String newModuleName) {
//     moduleName = newModuleName;
//     }
//     public String getModuleName() { return moduleName; }
//     public void setMark(double newMark) { mark = newMark; }
//     public double getMark() { return mark; }
//     public String toString() {
//     return "Mark for "+ moduleName + ": " + mark;
//     }
//     }


public class GradeBook{
    private String[] modulenames;
    private double[] marks;


    public GradeBook(){
        modulenames=new String[]{"Module 1","Module 2","Module 3","Module 4","Module 5"};
        marks=new double[]{100,100,100,100,100};
    }


    public GradeBook(String[] modulenames,double[] marks){
        this.modulenames=modulenames;
        this.marks=marks;
    }


    public void setModuleName(int index,String moduleName){
        if(index>=0 && index<5){
            modulenames[index]=moduleName;
        }
    }


    public String getModuleName(int index){
        if(index>=0 && index<5){
            return modulenames[index];
        }
        return null;
    }



public void setMark(int index,double mark){
    if(index>=0 && index<5){

        marks[index]=mark;
    }
}



public double getMark(int index){
    if (index>=0 && index<5){
        return marks[index];
    }
    return -1;
}


public String toString(){
    StringBuilder result = new StringBuilder();
    for (int i = 0;i<5;i++){
        result.append("Mark for ").append(modulenames[i]).append(": ").append(marks[i]).append("\n");

    }
    return result.toString();
}



}