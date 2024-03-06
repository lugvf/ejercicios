using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Angulo_de_triangulo_y_circulo
{
    class Program
    {
        static void Main(string[] args)
        {
            string OPCION;


            Console.WriteLine("ELIGA LA FIGURA A REALIZAR ");
            Console.WriteLine("1. TRIANGULO");
            Console.WriteLine("2. CIRCULO");
            OPCION = Console.ReadLine();

            switch (OPCION)
            {
                case "1":
                    Console.Write("INTRODUZCA LA BASE DEL TRIANGULO.:  ");
                    double baseTriangulo = double.Parse(Console.ReadLine());
                    Console.Write("INTRODUZCA LA ALTURA DEL TRIANGULO.: ");
                    double alturaTriangulo = double.Parse(Console.ReadLine());
                    double areaTriangulo = (baseTriangulo * alturaTriangulo) / 2;
                    Console.WriteLine("EL AREA DEL TRIANGULO ES.:  " + areaTriangulo);
                    break;
                case "2":
                    Console.Write("INTRODUZCA EL RADIO DEL CIRCULO.:  ");
                    double radio = double.Parse(Console.ReadLine());
                    double areaCirculo = Math.PI * Math.Pow(radio, 2);
                    Console.WriteLine("EL AREA DEL CIRCULO ES.:  " + areaCirculo);
                    break;

            }
            Console.ReadKey();


        }
    }
}

