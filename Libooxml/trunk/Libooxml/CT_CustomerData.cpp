#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include "pml.h"


CT_CustomerData::CT_CustomerData(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	if (attributes->getNamedItem(L"id")) {
		id = attributes->getNamedItem(L"id")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
	}
}

CT_CustomerData::~CT_CustomerData() {
}
