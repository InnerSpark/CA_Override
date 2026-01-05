	void FoldOpticsFresh (EntityAI ParentItem)
	{
		protected int foldingOpticRaisedId = -1;
		protected int foldingOpticLoweredId = -1;
		TStringArray selectionNames = new TStringArray;

		ParentItem.ConfigGetTextArray("simpleHiddenSelections",selectionNames);

		foldingOpticRaisedId = selectionNames.Find("folding_raised");
		foldingOpticLoweredId = selectionNames.Find("folding_lowered");  
			
		ParentItem.SetSimpleHiddenSelectionState(foldingOpticRaisedId,false);
		ParentItem.SetSimpleHiddenSelectionState(foldingOpticLoweredId,true);
	};

	void UnfoldOpticsFresh(EntityAI ParentItem)
	{
		protected int foldingOpticRaisedId = -1;
		protected int foldingOpticLoweredId = -1;
		TStringArray selectionNames = new TStringArray;

		ParentItem.ConfigGetTextArray("simpleHiddenSelections",selectionNames);

		foldingOpticRaisedId = selectionNames.Find("folding_raised");
		foldingOpticLoweredId = selectionNames.Find("folding_lowered");  

		ParentItem.SetSimpleHiddenSelectionState(foldingOpticRaisedId,true);
		ParentItem.SetSimpleHiddenSelectionState(foldingOpticLoweredId,false);
	};

	void HideIronSightsFresh (EntityAI ParentItem)
	{
		protected int hideIronsightsId = -1;
		TStringArray selectionNames = new TStringArray;

		ParentItem.ConfigGetTextArray("simpleHiddenSelections",selectionNames);

		hideIronsightsId = selectionNames.Find("hide_ironsights");
			
		ParentItem.SetSimpleHiddenSelectionState(hideIronsightsId,false);
	};

	void ShowIronSightsFresh (EntityAI ParentItem)
	{
		protected int hideIronsightsId = -1;
		TStringArray selectionNames = new TStringArray;

		ParentItem.ConfigGetTextArray("simpleHiddenSelections",selectionNames);

		hideIronsightsId = selectionNames.Find("hide_ironsights");

		ParentItem.SetSimpleHiddenSelectionState(hideIronsightsId,true);
	};
	
	void HideMuzzleFresh (EntityAI ParentItem)
	{
		protected int hideMuzzleId = -1;
		TStringArray selectionNames = new TStringArray;

		ParentItem.ConfigGetTextArray("simpleHiddenSelections",selectionNames);

		hideMuzzleId = selectionNames.Find("hide_muzzle");
			
		ParentItem.SetSimpleHiddenSelectionState(hideMuzzleId,false);
	};

	void ShowMuzzleFresh (EntityAI ParentItem)
	{
		protected int hideMuzzleId = -1;
		TStringArray selectionNames = new TStringArray;

		ParentItem.ConfigGetTextArray("simpleHiddenSelections",selectionNames);

		hideMuzzleId = selectionNames.Find("hide_muzzle");

		ParentItem.SetSimpleHiddenSelectionState(hideMuzzleId,true);
	};