void __thiscall AbnormalStateContainer::AbstateListInObject::AbstateListInObject(AbnormalStateContainer::AbstateListInObject *this)
{
  AbnormalStateContainer::AbstateListInObject *v1; // edi
  int v2; // esi
  int v3; // eax
  signed int v4; // ecx
  int v5; // edi
  int v6; // edx
  int v7; // edx
  bool v8; // zf
  _DWORD *v9; // edx
  int v10; // edx
  int *v11; // edx
  int v12; // edx
  _DWORD *v13; // edx

  v1 = this;
  `eh vector constructor iterator'(
    this,
    0x74u,
    28,
    (void (__thiscall *)(void *))AbnormalStateContainer::AbstateElementInObject::AbstateElementInObject,
    (void (__thiscall *)(void *))AbnormalStateContainer::AbstateElementInObject::~AbstateElementInObject);
  v2 = (int)&v1->asl_List;
  *(_DWORD *)v2 = &List<AbnormalStateContainer::AbstateElementInObject>::`vftable';
  *(_DWORD *)(v2 + 16) = 0;
  List<AbnormalStateContainer::AbstateElementInObject>::l_MakeList(&v1->asl_List, 0x1Cu);
  v3 = 0;
  v4 = 2;
  v5 = (int)&v1->asl_Element[2];
  do
  {
    if ( v4 - 2 < *(unsigned __int16 *)(v2 + 4) )
    {
      v6 = *(_DWORD *)(v2 + 8);
      if ( !*(_DWORD *)(v6 + v3) )
        *(_DWORD *)(v6 + v3) = v5 - 232;
    }
    if ( v4 - 1 < *(unsigned __int16 *)(v2 + 4) )
    {
      v7 = *(_DWORD *)(v2 + 8);
      v8 = *(_DWORD *)(v7 + v3 + 12) == 0;
      v9 = (_DWORD *)(v7 + v3 + 12);
      if ( v8 )
        *v9 = v5 - 116;
    }
    if ( v4 < *(unsigned __int16 *)(v2 + 4) )
    {
      v10 = *(_DWORD *)(v2 + 8);
      v8 = *(_DWORD *)(v10 + v3 + 24) == 0;
      v11 = (int *)(v10 + v3 + 24);
      if ( v8 )
        *v11 = v5;
    }
    if ( v4 + 1 < *(unsigned __int16 *)(v2 + 4) )
    {
      v12 = *(_DWORD *)(v2 + 8);
      v8 = *(_DWORD *)(v12 + v3 + 36) == 0;
      v13 = (_DWORD *)(v12 + v3 + 36);
      if ( v8 )
        *v13 = v5 + 116;
    }
    v4 += 4;
    v5 += 464;
    v3 += 48;
  }
  while ( v4 - 2 < 28 );
}
