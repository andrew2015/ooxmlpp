#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_GammaTransform::CT_GammaTransform() {
}

CT_GammaTransform::CT_GammaTransform(CT_GammaTransform &b) {
}

CT_GammaTransform::CT_GammaTransform(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	for (int i = 0; i < nodelist->getLength();++i) {
	}
}

CT_GammaTransform& CT_GammaTransform::operator=(CT_GammaTransform &b) {
	return *this;
}

CT_GammaTransform::~CT_GammaTransform() {
}

std::wstring CT_GammaTransform::Xml() {
	return L"";
}

