#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_Headers::CT_Headers() {
	header.clear();
}

CT_Headers::CT_Headers(CT_Headers &b) {
	header = b.header;
}

CT_Headers::CT_Headers(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	header.clear();
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"header") == 0) {
			header.push_back(nodelist->item(i)->getNodeValue());
		}
	}
}

CT_Headers& CT_Headers::operator=(CT_Headers &b) {
	header = b.header;
	return *this;
}

CT_Headers::~CT_Headers() {
}

std::wstring CT_Headers::Xml() {
	return L"";
}

