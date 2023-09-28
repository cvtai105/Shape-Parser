#pragma once
#include <map>
#include <string>
#include "IParser.h"


/// <summary>
/// Singleton class
/// </summary>
class ParserFactory
{
private:
	inline static ParserFactory* _instance { nullptr };
	ParserFactory();
	~ParserFactory();
	std::map<std::string, std::shared_ptr<IParser>> _prototypes;

public:
	ParserFactory(const ParserFactory&) = delete;
	ParserFactory& operator=(const ParserFactory&) = delete;

	/// <summary>
	/// get the ParserFactory
	/// </summary>
	/// <returns>pointer point to only one Factory</returns>
	static ParserFactory* getInstance();

public:
	/// <summary>
	/// regist an shared_ptr of concrete IParser with the name "type"
	/// </summary>
	/// <param name="type">type name</param>
	/// <param name="pser">concrete parser pointer</param>
	void registerWith(std::string type, std::shared_ptr<IParser> pser);

	/// <summary>
	/// select concrete Parser Shared_ptr
	/// </summary>
	/// <param name="type">the name was registed</param>
	/// <returns>concrete shared pointer IParser</returns>
	std::shared_ptr<IParser> select(std::string type);
};

