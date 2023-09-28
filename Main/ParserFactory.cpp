#pragma 
#include "ParserFactory.h"

ParserFactory::ParserFactory() {
	_instance = nullptr;
}
ParserFactory::~ParserFactory() {
	if (_instance)
		delete _instance;
}

ParserFactory* ParserFactory::getInstance() {
	if (nullptr == _instance) {
		_instance = new ParserFactory();
	}
	return _instance;
}

void ParserFactory::registerWith(std::string type, std::shared_ptr<IParser> pser) {
	if(_prototypes.contains(type)){
		return;
	}
	_prototypes.insert({ type, pser });
}

std::shared_ptr<IParser> ParserFactory::select(std::string type) {
	return _prototypes.contains(type) ? _prototypes[type] : nullptr;
}