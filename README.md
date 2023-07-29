

# Sculptor3D
Este é um projeto da faculdade onde o objetivo é aprender o uso de programação orientada a objetos para escreva um objeto3D.
No caso, criamos uma classe chamada Sculptor. Essa classe representa um escultor 3D e fornece métodos para criar e manipular uma matriz tridimensional de voxels. A classe permite que os usuários executem operações como colocar e remover voxels, criar caixas, esferas e elipsóides, definir cores e transparências e salvar a escultura em um arquivo OFF.


## Membros da Classe
A classe tem a seguinte composição
#### - Membros privados: declarações de caracteristicas da matriz.
- `Voxel ***v`: Ponteiro de uma matriz de 3 dimensões, usando um `struct` que tem as propriedades de um voxel.
- `int nx, ny, nz`: dimensões da matriz.
- `float r, g, b, a`: variaveis que representa a cor e a transparencia do voxel.
#### - Membros públicos: métodos de manipulação e definição da matriz.
- `Sculptor(int _nx, int _ny, int _nz)`: Construtor da classe, onde cria uma matriz com as dimensões especificadas.
- `~Sculptor()`: Liberar as memorias reservadas reservadas na matriz
- `void setColor(float _r, float _g, float _b, float _a)`: Define a cor e a transparecia do voxel
- `void putVoxel(int x, int y, int z)`: Adiciona um voxel na posição (x,y,z)
- `void cutVoxel(int x, int y, int z)`: Remove um voxe na posição (x,y,z)
- `void putBox(int x0, int x1, int y0, int y1, int z0, int z1)`: Adiciona uma caixa de voxels delimitada pelas posições (x0,y0,z0) e (x1,y1,z1)
- `void cutBox(int x0, int x1, int y0, int y1, int z0, int z1)`: Remove uma caixa de voxels delimitada pelas posições (x0,y0,z0) e (x1,y1,z1)
- `void putSphere(int xcenter, int ycenter, int zcenter, int radius)`: Adiciona uma esfera de um determinado raio com o centro na posição (xcenter, ycenter, zcenter)
- `void cutSphere(int xcenter, int ycenter, int zcenter, int radius)`: Remove uma esfera de um determinado raio com o centro na posição (xcenter, ycenter, zcenter)
- `void putEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz)`: Adiciona uma elipsoide de raios (rx,ry,rz) com o centro na posição (xcenter, ycenter, zcenter)
- `void cutEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz)`: Remove uma elipsoide de raios (rx,ry,rz) com o centro na posição (xcenter, ycenter, zcenter)
- `void writeOFF(const char* filename)`: Escreve a estrutura do objeto em um arquivo no formato OFF.

Além disso a classe faz o uso das seguinte bibliotecas:
- iostream
- iomanip
- fstream
## Uso

Aqui estão alguns exemplos de como utilizar as funcionalidades do programa, estamos desenhando um fosforo:

```cpp
#include "sculptor.h"

int main() {
  //cria um objeto B
  Sculptor B(30, 30, 30);
    
  //Definir a cor como cinza
  B.setColor(200,200,200,255);
  //Colocar um retangulo
  B.putBox(2,4,2,4,2,20);

  //Definir cor como preta
  B.setColor(0,0,0,255);
  //Colocar esfera
  B.putSphere(3,3,3,2);
    
  //Escreva em um arquivo
  B.writeOFF("fosforo.off");
  return 0;
}
```
Executando este codigo nossa saida será:
![Saida do programa](https://github.com/DiegoHVP/sculptor3d/blob/main/docbook/exemplo_saida_fosforo.jpg?raw=true)

## Formato do Arquivo OFF

O arquivo OFF gerado pelo programa contém os vértices e as faces dos voxels ativados, bem como as cores definidas para cada voxel. Ele pode ser visualizado em programas gráficos que suportam esse formato como por exemplo o [3DViewer](https://3dviewer.net/)

## Finalização
Este projeto e aberto, fique à vontade para fazer suas fazer suas variações e estudos com ele.
