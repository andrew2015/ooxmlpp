#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_EmptyElement::CT_EmptyElement() {
}

CT_EmptyElement::CT_EmptyElement(CT_EmptyElement &b) {
}

CT_EmptyElement::CT_EmptyElement(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	for (int i = 0; i < nodelist->getLength();++i) {
	}
}

CT_EmptyElement& CT_EmptyElement::operator=(CT_EmptyElement &b) {
	return *this;
}

CT_EmptyElement::~CT_EmptyElement() {
}

std::wstring CT_EmptyElement::Xml() {
	return L"";
}

