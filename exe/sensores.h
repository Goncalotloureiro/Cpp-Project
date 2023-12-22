#ifndef TRABALHOPOO_SENSORES_H
#define TRABALHOPOO_SENSORES_H

#include <string>
#include <unordered_map>

enum class SensorType {
    TEMPERATURA,
    MOVIMENTO,
    LUMINOSIDADE,
    RADIACAO,
    HUMIDADE,
    SOM,
    FUMO
};

class Sensores {
public:
    Sensores(const std::string& id, SensorType tipo);
    ~Sensores();

    std::string getId() const;
    SensorType getTipo() const;
    std::string getTipoAsString() const;

    void setId(const std::string& id);
    void setTipo(SensorType tipo);

private:
    std::string id;
    SensorType tipo;

    const std::unordered_map<SensorType, std::string> propertyMap = {
        {SensorType::TEMPERATURA, "temperatura"},
        {SensorType::MOVIMENTO, "movimento"},
        {SensorType::LUMINOSIDADE, "luminosidade"},
        {SensorType::RADIACAO, "radiação"},
        {SensorType::HUMIDADE, "humidade"},
        {SensorType::SOM, "som"},
        {SensorType::FUMO, "fumo"}
    };

    const std::unordered_map<SensorType, std::string> abbreviationMap = {
        {SensorType::TEMPERATURA, "t"},
        {SensorType::MOVIMENTO, "v"},
        {SensorType::LUMINOSIDADE, "m"},
        {SensorType::RADIACAO, "d"},
        {SensorType::HUMIDADE, "h"},
        {SensorType::SOM, "o"},
        {SensorType::FUMO, "f"}
    };
};

#endif // TRABALHOPOO_SENSORES_H

