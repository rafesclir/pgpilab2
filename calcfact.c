
//Función para calcular el factorial de un num
int calcfact(int num)
//caja de fresas 3$
{
  if (num <= 1) return 1;
  else return (num*calcfact(num-1));
}
