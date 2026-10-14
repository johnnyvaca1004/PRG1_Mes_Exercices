/* --------------------------- 
Laboratoire : 02
Auteur(s) : Johnny Vaca
Date : 25.09.2026
Date de dernière modification: 25.09.2026
But : Calcul du temps de trajet 
Remarque(s) : 
--------------------------- */
#include <iostream>
#include <cmath>

using namespace std;

static float calculer_Temps(const float distance,const float vitesse){
    return distance/vitesse;
}
static double calculer_Hypotenuse(const double cote1,const  double cote2) {
    return  sqrt(pow(cote1, 2)+ pow(cote2, 2));
}
int main() {
    constexpr double d_Roche_MIN = 3.0;
    constexpr double d_Route_MAX = 10.0;

    constexpr float v_Route = 5.0f;
    constexpr float v_Roche = 2.0f;
    double d_Route;
    cout << "quelle est la distance parcourue sur la route, par le robot" << endl;
        cin >> d_Route;


    const double d_Route_Manquante = d_Route_MAX - d_Route;
    const double d_Roche =calculer_Hypotenuse(d_Roche_MIN, d_Route_Manquante);


    const float t_Route = calculer_Temps( static_cast<float>(d_Route),    v_Route);
    const float t_Roche = calculer_Temps(static_cast<float>(d_Roche), v_Roche);
    const float t_Total = t_Route + t_Roche;
    const int heures = static_cast<int>(t_Total);
    const int minutes = static_cast<int>((t_Total - static_cast<float>(heures))*60);

    cout<<"le temps sur les roches est de: "  <<heures << " heures et " << minutes << " minutes"<<endl;


    return 0;
}