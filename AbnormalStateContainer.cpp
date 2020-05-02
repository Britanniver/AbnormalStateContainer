void __thiscall AbnormalStateContainer::AbstateListInObject::AbstateListInObject(AbnormalStateContainer::AbstateListInObject *this) {

  AbnormalStateContainer::AbstateListInObject *this; // edi
  List<AbnormalStateContainer::AbstateElementInObject> listAbstateObject; // esi
  AbnormalStateContainer::AbstateElementInObject abstateElement; // edi

  int innerIndex; // eax
  signed int outerIndex; // ecx

  this->asl_Element = std::vector<AbnormalStateContainer::AbstateElementInObject> (0x1C);
  listAbstateObject = &this->asl_List;

  listAbstateObject->vfptr = &List<AbnormalStateContainer::AbstateElementInObject>::vftable;
  listAbstateObject->l_ListArray = 0; // +16

  List<AbnormalStateContainer::AbstateElementInObject>::l_MakeList(listAbstateObject, 0x1C);

  int structSize = sizeof(AbnormalStateContainer::AbstateElementInObject); // 116
  int innerStructSize = sizeof(ListStruct<AbnormalStateContainer::AbstateElementInObject>) // 12

  innerIndex = 0;
  outerIndex = 2;
  abstateElement = &this->asl_Element[outerIndex];

  do {  

    if ( outerIndex - 2 < listAbstateObject->l_MaxSize) {
      if (!listAbstateObject->l_Array[innerIndex])
        listAbstateObject->l_Array[innerIndex] = &this->asl_Element[outerIndex - 2]
    }

    if ( outerIndex - 1 < listAbstateObject->l_MaxSize) {
      if (listAbstateObject->l_Array[innerIndex + 1] == 0)
        listAbstateObject->l_Array[innerIndex + 1] = &this->asl_Element[outerIndex - 1]
    }

    if ( outerIndex < listAbstateObject->l_MaxSize) {
      if (listAbstateObject->l_Array[innerIndex + 2] == 0)
        listAbstateObject->l_Array[innerIndex + 2] = &this->asl_Element[outerIndex]
    }

    if ( outerIndex + 1 < listAbstateObject->l_MaxSize) {
      if (listAbstateObject->l_Array[innerIndex + 3] == 0)
        listAbstateObject->l_Array[innerIndex + 3] = &this->asl_Element[outerIndex + 1]
    }

    innerIndex += 4;
    outerIndex += 4;

    abstateElement = &this->asl_Element[outerIndex];

  }
  while ( outerIndex - 2 < 28 );
}
