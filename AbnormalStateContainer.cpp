void __thiscall AbnormalStateContainer::AbstateListInObject::AbstateListInObject(AbnormalStateContainer::AbstateListInObject *this) {

  List<AbnormalStateContainer::AbstateElementInObject> listAbstateObject; // esi

  this->asl_Element = new AbnormalStateContainer::AbstateElementInObject[0x1C);
                                                                         
  listAbstateObject = &this->asl_List;
  listAbstateObject->vfptr = &List<AbnormalStateContainer::AbstateElementInObject>::vftable;
  listAbstateObject->l_ListArray = 0; // +16

  List<AbnormalStateContainer::AbstateElementInObject>::l_MakeList(listAbstateObject, 0x1C);

  for (int i = 0; i < listAbstateObject->l_MaxSize; i++) {
        listAbstateObject->l_Array[i].ls_Content = &this->asl_Element[i];
    }                                                                  

}
