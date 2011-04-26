#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include "pml.h"


CT_CornerDirectionTransition::CT_CornerDirectionTransition(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	if (attributes->getNamedItem(L"dir")) {
		dir = attributes->getNamedItem(L"dir")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
	}
}

CT_CornerDirectionTransition::~CT_CornerDirectionTransition() {
}