//Comentario añadido por juafersan4

int calcfact(int num)
{
  if (num <= 1) return 1;
  else return (num*calcfact(num-1));
}
