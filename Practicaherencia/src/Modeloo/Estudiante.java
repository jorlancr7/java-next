
package Modeloo;


public class Estudiante extends Persona {
    private int codEstudiante;
    private float notaFinal;

    public Estudiante() {
    }
    

    public Estudiante(int codEstudiante, float notaFinal, String nombre, String apellido, int edad) {
        super(nombre, apellido, edad);
        this.codEstudiante = codEstudiante;
        this.notaFinal = notaFinal;
    }

    public int getCodEstudiante() {
        return codEstudiante;
    }

    public void setCodEstudiante(int codEstudiante) {
        this.codEstudiante = codEstudiante;
    }

    public float getNotaFinal() {
        return notaFinal;
    }

    public void setNotaFinal(float notaFinal) {
        this.notaFinal = notaFinal;
    }

  


   
       public void mostrarDatos(){ 
        System.out.println("\nNombre:" + getNombre() +
                "\nApellido: " + getApellido() +
                "\nEdad: " + getEdad() +
                "\nCodigo de estudiante: " + codEstudiante +
                "\nNota final: " + notaFinal ); 
        
}
        
 
 }
