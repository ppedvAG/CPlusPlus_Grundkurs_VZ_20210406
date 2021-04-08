#ifndef FORMEN_H
#define FORMEN_H
class Form {
protected:
	float x;
	float y;
	const static float pi;
public:
	Form(float x, float y);
	virtual float Flaeche() = 0;
};

class Kreis : public Form {
public:
	Kreis(float radius);

	//ueberschreiben der Flaechen Methode
	virtual float Flaeche() override;

	//Methode nur bei Kreis vorhanden
	void KreisMethode();
};

class Kugel : public Form {
public:
	Kugel(float r);

	//ueberschreiben der Flaechen Methode
	virtual float Flaeche() override;

	//Methode nur bei Kugel vorhanden
	void KugelMethode();
};

class Zylinder : public Form {
public:
	Zylinder(float r, float h);

	//ueberschreiben der Flaechen Methode
	virtual float Flaeche() override;

	//Methode nur bei Zylinder vorhanden
	void ZylinderMethode();
};


#endif // !FORMEN_H
