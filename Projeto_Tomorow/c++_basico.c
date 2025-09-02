
// A FORÇA DE ACELERACAO
#include <iostream>
using namespace std;

int main() {
    int espaco, tempo, velocidade;
    cin >> espaco;
    cin >> tempo;

    velocidade = espaco/tempo;

    cout << velocidade << endl;
    return 0;
}

_________________________________________________________________
//AJUDE SKYWALKER
#include <iostream>
using namespace std;

int main() {
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    cout << a - (b + c + d + e);
    return 0;
}

__________________________________________________________________
// INCURSAO E RECONHECIMENTO
#include<iostream>
using namespace std;

int main(){
    int levi = 20;
    int soldados = 5;
    int titan;

    cin >> titan;
    titan = titan - levi;
    
    int valor = titan/soldados;
    cout << valor;
    return 0;
}

_______________________________________________________________
//RAFFTNG NAS CATARADAS
#include <iostream>
using namespace std;

    int main(){
        int A, B, C, D;
        int func = 2;

        cin >> A >> B >> C >> D;
        A = A - func;
        B = B - func;
        C = C - func;
        D = D - func;

        cout << A + B + C + D << endl;
        return 0;
    }

________________________________________________________________
// TREINO NA FLORESTA
#include<iostream>
using namespace std;

int main(){
    int tamanho;
    int percurso;

    cin >> tamanho >> percurso;
    cout << percurso % tamanho;
    return 0;
}


_________________________________________________________________
// AS AVENTURAS DE SNAKE
#include<iostream>
using namespace std;

int main(){
    int colet1, colet2, colet3;
    cin >> colet1 >> colet2 >> colet3;
    int venen1, venen2, venen3;
    cin >> venen1 >> venen2 >> venen3;
    int ovosV = venen1+venen2+venen3;
    int amazena = colet1+ colet2+ colet3;
    int finali = amazena - 3 * (ovosV);
    cout << finali << endl;
    return 0;
}

___________________________________________________________________
// PROTEJA A ESTRELA DA MORTE
#include<iostream>
using namespace std;

int main(){
    int ameaca;
    cin >> ameaca;
    if(ameaca >= 50) cout << "Ativar escudos" << endl;
    else cout << "Susse no musse" << endl;
    
    return 0;
}

____________________________________________________________________
// SUPER MARIO BROS
#include <iostream>
using namespace std;

int main() {
    int star, MEGA, AZUL;
    cin >> star >> MEGA >> AZUL;

    if (star == 30) {
        cout << "PROXIMO MUNDO" << endl;
    } else {
        cout << (30 - star) << " " << (6 - MEGA) << " " << (3 - AZUL) << endl;
    }

    return 0;
}

___________________________________________________________________________
//DRONE NA AMAZONIA 
#include <iostream>
using namespace std;

int main(){
    int x1, y1,p1, z1;
    cin >> x1 >> y1;
    cin >> p1 >> z1;
    int x,y;
    x = x1+y1;
    y = p1 + z1;

    if(y == x)cout << "Soltar pacote" << endl;
    else cout << "Nao soltar pacote\n";
return 0;
}

______________________________________________________________________________
// PESCARIA

#include <iostream>
using namespace std;

int main()
{
    int entrada;
    int valor;
    cin >> entrada;
    cin >> valor;
    int armazena = entrada*valor;
    if (armazena < 500)    cout << "Paciencia Firmino!" << endl;
    else if(armazena < 1800)    cout << "Vara de Bambu" << endl;
    else if(armazena < 7500)    cout << "Vara de Fibra de Vidro" << endl;
    else cout << "Vara de Iridio" << endl;

    return 0;
}

____________________________________________________________________________
// AS SEIS JOIEA DO INFINITO
#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> joias;
    int valor;
    bool valores_validos = true;

    for(int i = 0; i < 6; i++) {
        cin >> valor;

        if(valor < 1 || valor > 6) {
            valores_validos = false; // fora do intervalo permitido
        }

        joias.insert(valor); // set ignora duplicatas
    }

    if(valores_validos && joias.size() == 6)
        cout << "Infelizmente perdemos a guerra." << endl;
    else
        cout << "Os Vingadores ganharam a batalha!!!" << endl;

    return 0;
}

___________________________________________________________________________
//FAZ O URRO
#include <iostream>
using namespace std;

int main(){
    int p1, p2, pegaMeuBahia;
    cin>> p1 >> p2 >> pegaMeuBahia;
    int total =  p1+ p2 + pegaMeuBahia;
    
    if(total>80)cout<< "Shrek vai dar o urro!\n"; //fique calmo cheréqui
    else if(total<20)cout<< "Shrek vai dar o urro!\n";//calma cheréqui
    else if((p1 > 50)||(p2 > 50)||(pegaMeuBahia>50))cout<< "Shrek vai dar o urro!\n";
    else cout << "Shrek ficou calmo.\n";
    return 0;
}

__________________________________________________________________________
// A TABUADA DO ZEZINHO
#include <iostream>

using namespace std;

int main(){
    int Meubahiabroca;   cin>> Meubahiabroca;
    
    for(int i = 0; i<=100; i++)cout<< Meubahiabroca*i << endl;
    return 0;
}

___________________________________________________________________________
//FORTALECIMENTO DE CLIMA
#include <iostream>

using namespace std;

int main(){
    int poquemon;   cin>> poquemon;
    
    for(int i; i<poquemon; i++){
       int variavel, variave2;
       for(int i; i<poquemon; i++){
           cin >> variavel>> variave2;
           cout << variave2+variavel<< "\n";
           
       } 
    }
    return 0;
}

__________________________________________________________________________
//GELEIA DE AGUA VIVA
#include <iostream>
#include <string>

int main(){
using namespace std;

    int valor,hamburg, geleia=0, trad=0;
    cin >> valor;

    for(int i = 0; i < valor; i++){
        cin >> hamburg;
        if(hamburg == 10)        trad++;
        else        geleia ++;
        }
    if(trad > geleia){
    cout << "Tradicional";
    return 0;
    }
    cout << "Geleia";

    
    return 0;
}

_________________________________________________________________________
//JOGO DA PESCA
#include <iostream>

int main() {
    using namespace std;

    int pescTotal, tempRest, tempoTotal, pescados = 0;
    cin >> pescTotal >> tempoTotal;

    for (int i = 0; i < pescTotal; i++) {
        cin >> tempRest;
        tempoTotal -= tempRest;
        if (tempoTotal >= 0) {
            pescados++;
        }
    }

    cout << pescados;
    return 0;
}

_________________________________________________________________________
//HOSPEDAGEM
#include <iostream>
#include <string>
using namespace std;

int main() {
    int n; // número de amigos
    cin >> n;

    string tipo;
    int total = 0;

    while (true) {
        cin >> tipo;

        if (tipo == "FIM") break;

        if (tipo == "Casal") total += 2;
        else if (tipo == "Triplo") total += 3;
        else if (tipo == "Quadruplo") total += 4;
        else if (tipo == "Familia") total += 5;
    }

    if (total >= n) {
        cout << "Pode reservar! Esses quartos cabem todos." << endl;
    } else {
        cout << "Procure outra pousada." << endl;
    }

    return 0;
}


________________________________________________________________________
// EM BUSCA DA ESMERALDA
#include <iostream>
using namespace std;

int main() {
    int n; 
    cin >> n;

    int valor;
    bool achou = false;

    int c; 
    int caixas[n];

    for (int i = 0; i < n; i++) {
        cin >> caixas[i];
    }

    cin >> c;

    for (int i = 0; i < n; i++) {
        if (caixas[i] == c) {
            cout << c << endl;
            return 0;
        }
    }

    cout << -1 << endl;
    return 0;
}

_________________________________________________________________________
// AVATAR: HABILIDADES DOS DOBRADORES
#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int habilidades[N];
    int identificadores[N];
    int Y;

    for (int i = 0; i < N; i++) {
        cin >> habilidades[i];
    }

    for (int i = 0; i < N; i++) {
        cin >> identificadores[i];
    }

    cin >> Y;

    bool encontrou = false;

    for (int i = 0; i < N; i++) {
        if (habilidades[i] == Y) {
            if (encontrou) cout << " ";
            cout << identificadores[i];
            encontrou = true;
        }
    }

    if (!encontrou) {
        cout << "Nenhum";
    }

    cout << endl;

    return 0;
}

________________________________________________________________________
//PULANDO ATÉ O TESOURO


_________________________________________________________________________
//TREINO: CSGO
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int pontos[n];
    for (int i = 0; i < n; i++) {
        cin >> pontos[i];
    }

    int cor_negativa;
    cin >> cor_negativa;

    int total = 0;
    for (int i = 0; i < n; i++) {
        if (pontos[i] == cor_negativa)
            total -= pontos[i]; 
        else
            total += pontos[i]; 
    }

    cout << total << endl;

    return 0;
}

__________________________________________________________________________
// A GRANDE ATRAVESSIA

__________________________________________________________________________
//DRONE NA AMAZONIA
#include <iostream>
using namespace std;

int main(){
    int x1, y1,p1, z1;
    cin >> x1 >> y1;
    cin >> p1 >> z1;
    int x,y;
    x = x1+y1;
    y = p1 + z1;

    if(y == x)cout << "Soltar pacote" << endl;
    else cout << "Nao soltar pacote\n";
return 0;
}

_____________________________________________________________________________
//

_____________________________________________________________________________
//CAPITAL DAS GALAXIAS
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
using namespace std;

struct sistema {
    string planeta;
    int populacao;
};

// Função principal
int main() {
    int n;
    cin >> n;

    map<string, sistema> sistemas;

    string sistema_capital{0};
    int maxPopulacao = -1;

    for (int i = 0; i < n; ++i) {
        string nomeSistema, nomePlaneta;
        int populacao;
        cin >> nomeSistema >> nomePlaneta >> populacao;

        if (sistemas.find(nomeSistema) == sistemas.end() || populacao > sistemas[nomeSistema].populacao) {
            sistemas[nomeSistema] = {nomePlaneta, populacao};
        }

        if (populacao > maxPopulacao) {
            maxPopulacao = populacao;
            sistema_capital = nomeSistema;
        }
    }

    cout << sistema_capital << " " << maxPopulacao << endl;

    for (const auto& [nome, dados] : sistemas) {
        cout << nome << " " << dados.populacao << endl;
    }

    return 0;
}

