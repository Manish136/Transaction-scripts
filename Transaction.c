//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

Transaction()
{
	lr_start_transaction("T01_Transaction_URLNavigation");
	truclient_step("1", "Navigate to 'https:\\opperf.cat.com'", "snapshot=Transaction_1.inf");
	lr_end_transaction("T01_Transaction_URLNavigation",0);
	truclient_step("2", "Click on Capitalstream User ID textbox", "snapshot=Transaction_2.inf");
	truclient_step("3", "Type UserName=LR.getParam('UserName') in Capitalstream User ID textbox", "snapshot=Transaction_3.inf");
	lr_start_transaction("T02_Transaction_SignIn");
	truclient_step("4", "Click on Sign In button", "snapshot=Transaction_4.inf");
	lr_end_transaction("T02_Transaction_SignIn",0);
	truclient_step("5", "Wait 3 seconds", "snapshot=Transaction_5.inf");
	truclient_step("6", "Click on Quote No textbox", "snapshot=Transaction_6.inf");
	truclient_step("7", "Type QuoteNumber=LR.getParam('QuoteNumber') in Quote No textbox", "snapshot=Transaction_7.inf");
	lr_start_transaction("T03_Transaction_EnterQuoteNoAndClickGoButton");
	truclient_step("9", "Click on Go button", "snapshot=Transaction_9.inf");
	lr_end_transaction("T03_Transaction_EnterQuoteNoAndClickGoButton",0);
	truclient_step("10", "Wait 8 seconds", "snapshot=Transaction_10.inf");
	lr_start_transaction("T04_Transaction_ClickCreateTransactionButton");
	truclient_step("12", "Click on Create Transaction button", "snapshot=Transaction_12.inf");
	lr_end_transaction("T04_Transaction_ClickCreateTransactionButton",0);
	truclient_step("13", "Wait 5 seconds", "snapshot=Transaction_13.inf");
	lr_start_transaction("T05_Transaction_SelectCheckBoxes");
	truclient_step("15", "Click on I am authorized to view... checkbox", "snapshot=Transaction_15.inf");
	truclient_step("17", "Click on Please do not proceed... checkbox", "snapshot=Transaction_17.inf");
	lr_end_transaction("T05_Transaction_SelectCheckBoxes",0);
	truclient_step("18", "Wait 3 seconds", "snapshot=Transaction_18.inf");
	lr_start_transaction("T06_Transaction_EnableLegalNameVerifiedCheckBox");
	truclient_step("20", "Click on on checkbox", "snapshot=Transaction_20.inf");
	lr_end_transaction("T06_Transaction_EnableLegalNameVerifiedCheckBox",0);
	truclient_step("21", "Wait 3 seconds", "snapshot=Transaction_21.inf");
	truclient_step("24", "Select Agriculture from customer.industry type listbox", "snapshot=Transaction_24.inf");
	truclient_step("26", "Select AG05-Nurseries from Select Option AgricultureCommercial... listbox", "snapshot=Transaction_26.inf");
	truclient_step("28", "Click on Select Option Auction... gridcell", "snapshot=Transaction_28.inf");
	lr_start_transaction("T07_Transaction_CustomerPage_ClickNextButton");
	truclient_step("33", "Click on Next button", "snapshot=Transaction_33.inf");
	lr_end_transaction("T07_Transaction_CustomerPage_ClickNextButton",0);
	truclient_step("35", "Wait 3 seconds", "snapshot=Transaction_35.inf");
	lr_start_transaction("T08_Transaction_AddressPage_ClickNextButton");
	truclient_step("36", "Click on Next button", "snapshot=Transaction_36.inf");
	lr_end_transaction("T08_Transaction_AddressPage_ClickNextButton",0);
	truclient_step("37", "Wait 3 seconds", "snapshot=Transaction_37.inf");
	lr_start_transaction("T09_Transaction_RelationshipPage_ClickNextButton");
	truclient_step("38", "Click on Next button", "snapshot=Transaction_38.inf");
	lr_end_transaction("T09_Transaction_RelationshipPage_ClickNextButton",0);
	truclient_step("39", "Wait 3 seconds", "snapshot=Transaction_39.inf");
	lr_start_transaction("T10_Transaction_SelectCreditAppSubmissionDate");
	truclient_step("41", "Click on Calendar image", "snapshot=Transaction_41.inf");
	truclient_step("43", "Set datepicker (1) datepicker to 30", "snapshot=Transaction_43.inf");
	lr_end_transaction("T10_Transaction_SelectCreditAppSubmissionDate",0);
	truclient_step("45", "Wait 5 seconds", "snapshot=Transaction_45.inf");
	lr_start_transaction("T11_Transaction_AssetRequestInfoPage_ClickNextButton");
	truclient_step("46", "Click on Next button", "snapshot=Transaction_46.inf");
	lr_end_transaction("T11_Transaction_AssetRequestInfoPage_ClickNextButton",0);
	truclient_step("47", "Wait 5 seconds", "snapshot=Transaction_47.inf");
	lr_start_transaction("T12_Transaction_PricingOptionsPage_ClickNextButton");
	truclient_step("48", "Click on Next button", "snapshot=Transaction_48.inf");
	lr_end_transaction("T12_Transaction_PricingOptionsPage_ClickNextButton",0);
	truclient_step("50", "Wait 10 seconds", "snapshot=Transaction_50.inf");
	truclient_step("51", "Verify Submit Application 's 'Visible Text' Contain Submit Application", "snapshot=Transaction_51.inf");
	lr_start_transaction("T13_Transaction_ClickonSubmitApplicationButton");
	truclient_step("52", "Click on Submit Application button", "snapshot=Transaction_52.inf");
	lr_end_transaction("T13_Transaction_ClickonSubmitApplicationButton",0);
	truclient_step("54", "Wait 5 seconds", "snapshot=Transaction_54.inf");
	truclient_step("58", "Get All Text from TransactionNumber link", "snapshot=Transaction_58.inf");
	truclient_step("59", "Evaluate JavaScript code LR.log(transactionNumber);", "snapshot=Transaction_59.inf");
	truclient_step("60", "Evaluate JavaScript code TC.log('The Tranaction n...er, 'Standard');", "snapshot=Transaction_60.inf");
	truclient_step("62", "Get All Text from CustomerName link", "snapshot=Transaction_62.inf");
	truclient_step("65", "Get All Text from UserId", "snapshot=Transaction_65.inf");
	truclient_step("66", "Evaluate JavaScript code var loggedInUser = UserI...Date+'>');", "snapshot=Transaction_66.inf");
	lr_start_transaction("T14_Transaction_Logout");
	truclient_step("68", "Click on Logout link", "snapshot=Transaction_68.inf");
	lr_end_transaction("T14_Transaction_Logout",0);

	return 0;
}
