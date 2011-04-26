#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include "pml.h"


CT_TLAnimVariantIntegerVal::CT_TLAnimVariantIntegerVal(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	if (attributes->getNamedItem(L"val")) {
		val = attributes->getNamedItem(L"val")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
	}
}

CT_TLAnimVariantIntegerVal::~CT_TLAnimVariantIntegerVal() {
}
