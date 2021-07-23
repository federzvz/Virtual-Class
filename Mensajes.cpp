
#include "Mensajes.h"

Mensajes::Mensajes(int id_x, DtFecha fecha_x, DtTimeStamp hora_x) {
    this->id=id_x;
    this->fecha_envio=&fecha_x;
    *this->hora_envio=hora_x;
}

Mensajes::Mensajes(const Mensajes& orig) {
}

Mensajes::~Mensajes() {
}

void Mensajes::setID(int num){
    this->id=num;
}
int Mensajes::getID(){
    return this->id;
}
void Mensajes::setFecha(DtFecha fecha_x){
    this->fecha_envio=&fecha_x;
}
void Mensajes::setHora(DtTimeStamp hora_x){
    this->hora_envio=&hora_x;
}
DtFecha Mensajes::getFecha(){
    return *this->fecha_envio;
}
DtTimeStamp Mensajes::getHora(){
    return *this->hora_envio;
}