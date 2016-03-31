#ifndef ENTITY_h
#define ENTITY_h

class Entity {
private:
	int id_;
	Vec pos_;
	char symbol_;
public:
	Entity (){
		static int idCounter =1;
		id_=idCounter;
		idCounter++;
	}

	void setPosition(int x, int y) {
		pos_.x = x;
		pos_.y = y;
	}

	void move(Vec dir) {
		pos_.x += dir.x;
		pos_.y += dir.y;
	}

	Vec getPos() const { return pos_; }
	int getId() const { return id_; }
	char getSymbol() const { return symbol_; }

	void setSymbol(char symbol) { symbol_ = symbol; }
};

#endif 